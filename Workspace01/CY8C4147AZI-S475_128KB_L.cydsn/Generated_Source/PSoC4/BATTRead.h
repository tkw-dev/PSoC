/*******************************************************************************
* File Name: BATTRead.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_BATTRead_H) /* Pins BATTRead_H */
#define CY_PINS_BATTRead_H

#include "cytypes.h"
#include "cyfitter.h"
#include "BATTRead_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} BATTRead_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   BATTRead_Read(void);
void    BATTRead_Write(uint8 value);
uint8   BATTRead_ReadDataReg(void);
#if defined(BATTRead__PC) || (CY_PSOC4_4200L) 
    void    BATTRead_SetDriveMode(uint8 mode);
#endif
void    BATTRead_SetInterruptMode(uint16 position, uint16 mode);
uint8   BATTRead_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void BATTRead_Sleep(void); 
void BATTRead_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(BATTRead__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define BATTRead_DRIVE_MODE_BITS        (3)
    #define BATTRead_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - BATTRead_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the BATTRead_SetDriveMode() function.
         *  @{
         */
        #define BATTRead_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define BATTRead_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define BATTRead_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define BATTRead_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define BATTRead_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define BATTRead_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define BATTRead_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define BATTRead_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define BATTRead_MASK               BATTRead__MASK
#define BATTRead_SHIFT              BATTRead__SHIFT
#define BATTRead_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BATTRead_SetInterruptMode() function.
     *  @{
     */
        #define BATTRead_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define BATTRead_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define BATTRead_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define BATTRead_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(BATTRead__SIO)
    #define BATTRead_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(BATTRead__PC) && (CY_PSOC4_4200L)
    #define BATTRead_USBIO_ENABLE               ((uint32)0x80000000u)
    #define BATTRead_USBIO_DISABLE              ((uint32)(~BATTRead_USBIO_ENABLE))
    #define BATTRead_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define BATTRead_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define BATTRead_USBIO_ENTER_SLEEP          ((uint32)((1u << BATTRead_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << BATTRead_USBIO_SUSPEND_DEL_SHIFT)))
    #define BATTRead_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << BATTRead_USBIO_SUSPEND_SHIFT)))
    #define BATTRead_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << BATTRead_USBIO_SUSPEND_DEL_SHIFT)))
    #define BATTRead_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(BATTRead__PC)
    /* Port Configuration */
    #define BATTRead_PC                 (* (reg32 *) BATTRead__PC)
#endif
/* Pin State */
#define BATTRead_PS                     (* (reg32 *) BATTRead__PS)
/* Data Register */
#define BATTRead_DR                     (* (reg32 *) BATTRead__DR)
/* Input Buffer Disable Override */
#define BATTRead_INP_DIS                (* (reg32 *) BATTRead__PC2)

/* Interrupt configuration Registers */
#define BATTRead_INTCFG                 (* (reg32 *) BATTRead__INTCFG)
#define BATTRead_INTSTAT                (* (reg32 *) BATTRead__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define BATTRead_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(BATTRead__SIO)
    #define BATTRead_SIO_REG            (* (reg32 *) BATTRead__SIO)
#endif /* (BATTRead__SIO_CFG) */

/* USBIO registers */
#if !defined(BATTRead__PC) && (CY_PSOC4_4200L)
    #define BATTRead_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define BATTRead_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define BATTRead_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define BATTRead_DRIVE_MODE_SHIFT       (0x00u)
#define BATTRead_DRIVE_MODE_MASK        (0x07u << BATTRead_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins BATTRead_H */


/* [] END OF FILE */
