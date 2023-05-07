/*******************************************************************************
* File Name: PushSW.h  
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

#if !defined(CY_PINS_PushSW_H) /* Pins PushSW_H */
#define CY_PINS_PushSW_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PushSW_aliases.h"


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
} PushSW_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   PushSW_Read(void);
void    PushSW_Write(uint8 value);
uint8   PushSW_ReadDataReg(void);
#if defined(PushSW__PC) || (CY_PSOC4_4200L) 
    void    PushSW_SetDriveMode(uint8 mode);
#endif
void    PushSW_SetInterruptMode(uint16 position, uint16 mode);
uint8   PushSW_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void PushSW_Sleep(void); 
void PushSW_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(PushSW__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define PushSW_DRIVE_MODE_BITS        (3)
    #define PushSW_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PushSW_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the PushSW_SetDriveMode() function.
         *  @{
         */
        #define PushSW_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define PushSW_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define PushSW_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define PushSW_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define PushSW_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define PushSW_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define PushSW_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define PushSW_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define PushSW_MASK               PushSW__MASK
#define PushSW_SHIFT              PushSW__SHIFT
#define PushSW_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PushSW_SetInterruptMode() function.
     *  @{
     */
        #define PushSW_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define PushSW_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define PushSW_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define PushSW_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(PushSW__SIO)
    #define PushSW_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(PushSW__PC) && (CY_PSOC4_4200L)
    #define PushSW_USBIO_ENABLE               ((uint32)0x80000000u)
    #define PushSW_USBIO_DISABLE              ((uint32)(~PushSW_USBIO_ENABLE))
    #define PushSW_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define PushSW_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define PushSW_USBIO_ENTER_SLEEP          ((uint32)((1u << PushSW_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << PushSW_USBIO_SUSPEND_DEL_SHIFT)))
    #define PushSW_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << PushSW_USBIO_SUSPEND_SHIFT)))
    #define PushSW_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << PushSW_USBIO_SUSPEND_DEL_SHIFT)))
    #define PushSW_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(PushSW__PC)
    /* Port Configuration */
    #define PushSW_PC                 (* (reg32 *) PushSW__PC)
#endif
/* Pin State */
#define PushSW_PS                     (* (reg32 *) PushSW__PS)
/* Data Register */
#define PushSW_DR                     (* (reg32 *) PushSW__DR)
/* Input Buffer Disable Override */
#define PushSW_INP_DIS                (* (reg32 *) PushSW__PC2)

/* Interrupt configuration Registers */
#define PushSW_INTCFG                 (* (reg32 *) PushSW__INTCFG)
#define PushSW_INTSTAT                (* (reg32 *) PushSW__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define PushSW_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(PushSW__SIO)
    #define PushSW_SIO_REG            (* (reg32 *) PushSW__SIO)
#endif /* (PushSW__SIO_CFG) */

/* USBIO registers */
#if !defined(PushSW__PC) && (CY_PSOC4_4200L)
    #define PushSW_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define PushSW_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define PushSW_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define PushSW_DRIVE_MODE_SHIFT       (0x00u)
#define PushSW_DRIVE_MODE_MASK        (0x07u << PushSW_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins PushSW_H */


/* [] END OF FILE */
