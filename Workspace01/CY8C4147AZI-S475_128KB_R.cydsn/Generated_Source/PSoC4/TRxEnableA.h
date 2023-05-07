/*******************************************************************************
* File Name: TRxEnableA.h  
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

#if !defined(CY_PINS_TRxEnableA_H) /* Pins TRxEnableA_H */
#define CY_PINS_TRxEnableA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "TRxEnableA_aliases.h"


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
} TRxEnableA_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   TRxEnableA_Read(void);
void    TRxEnableA_Write(uint8 value);
uint8   TRxEnableA_ReadDataReg(void);
#if defined(TRxEnableA__PC) || (CY_PSOC4_4200L) 
    void    TRxEnableA_SetDriveMode(uint8 mode);
#endif
void    TRxEnableA_SetInterruptMode(uint16 position, uint16 mode);
uint8   TRxEnableA_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void TRxEnableA_Sleep(void); 
void TRxEnableA_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(TRxEnableA__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define TRxEnableA_DRIVE_MODE_BITS        (3)
    #define TRxEnableA_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - TRxEnableA_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the TRxEnableA_SetDriveMode() function.
         *  @{
         */
        #define TRxEnableA_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define TRxEnableA_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define TRxEnableA_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define TRxEnableA_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define TRxEnableA_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define TRxEnableA_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define TRxEnableA_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define TRxEnableA_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define TRxEnableA_MASK               TRxEnableA__MASK
#define TRxEnableA_SHIFT              TRxEnableA__SHIFT
#define TRxEnableA_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in TRxEnableA_SetInterruptMode() function.
     *  @{
     */
        #define TRxEnableA_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define TRxEnableA_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define TRxEnableA_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define TRxEnableA_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(TRxEnableA__SIO)
    #define TRxEnableA_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(TRxEnableA__PC) && (CY_PSOC4_4200L)
    #define TRxEnableA_USBIO_ENABLE               ((uint32)0x80000000u)
    #define TRxEnableA_USBIO_DISABLE              ((uint32)(~TRxEnableA_USBIO_ENABLE))
    #define TRxEnableA_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define TRxEnableA_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define TRxEnableA_USBIO_ENTER_SLEEP          ((uint32)((1u << TRxEnableA_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << TRxEnableA_USBIO_SUSPEND_DEL_SHIFT)))
    #define TRxEnableA_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << TRxEnableA_USBIO_SUSPEND_SHIFT)))
    #define TRxEnableA_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << TRxEnableA_USBIO_SUSPEND_DEL_SHIFT)))
    #define TRxEnableA_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(TRxEnableA__PC)
    /* Port Configuration */
    #define TRxEnableA_PC                 (* (reg32 *) TRxEnableA__PC)
#endif
/* Pin State */
#define TRxEnableA_PS                     (* (reg32 *) TRxEnableA__PS)
/* Data Register */
#define TRxEnableA_DR                     (* (reg32 *) TRxEnableA__DR)
/* Input Buffer Disable Override */
#define TRxEnableA_INP_DIS                (* (reg32 *) TRxEnableA__PC2)

/* Interrupt configuration Registers */
#define TRxEnableA_INTCFG                 (* (reg32 *) TRxEnableA__INTCFG)
#define TRxEnableA_INTSTAT                (* (reg32 *) TRxEnableA__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define TRxEnableA_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(TRxEnableA__SIO)
    #define TRxEnableA_SIO_REG            (* (reg32 *) TRxEnableA__SIO)
#endif /* (TRxEnableA__SIO_CFG) */

/* USBIO registers */
#if !defined(TRxEnableA__PC) && (CY_PSOC4_4200L)
    #define TRxEnableA_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define TRxEnableA_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define TRxEnableA_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define TRxEnableA_DRIVE_MODE_SHIFT       (0x00u)
#define TRxEnableA_DRIVE_MODE_MASK        (0x07u << TRxEnableA_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins TRxEnableA_H */


/* [] END OF FILE */
