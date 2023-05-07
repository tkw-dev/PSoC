/*******************************************************************************
* File Name: BATTRead.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "BATTRead.h"

static BATTRead_BACKUP_STRUCT  BATTRead_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: BATTRead_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet BATTRead_SUT.c usage_BATTRead_Sleep_Wakeup
*******************************************************************************/
void BATTRead_Sleep(void)
{
    #if defined(BATTRead__PC)
        BATTRead_backup.pcState = BATTRead_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            BATTRead_backup.usbState = BATTRead_CR1_REG;
            BATTRead_USB_POWER_REG |= BATTRead_USBIO_ENTER_SLEEP;
            BATTRead_CR1_REG &= BATTRead_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(BATTRead__SIO)
        BATTRead_backup.sioState = BATTRead_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        BATTRead_SIO_REG &= (uint32)(~BATTRead_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: BATTRead_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to BATTRead_Sleep() for an example usage.
*******************************************************************************/
void BATTRead_Wakeup(void)
{
    #if defined(BATTRead__PC)
        BATTRead_PC = BATTRead_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            BATTRead_USB_POWER_REG &= BATTRead_USBIO_EXIT_SLEEP_PH1;
            BATTRead_CR1_REG = BATTRead_backup.usbState;
            BATTRead_USB_POWER_REG &= BATTRead_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(BATTRead__SIO)
        BATTRead_SIO_REG = BATTRead_backup.sioState;
    #endif
}


/* [] END OF FILE */
