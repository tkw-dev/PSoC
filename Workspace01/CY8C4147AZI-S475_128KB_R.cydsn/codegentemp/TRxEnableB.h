/*******************************************************************************
* File Name: TRxEnableB.h  
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

#if !defined(CY_PINS_TRxEnableB_H) /* Pins TRxEnableB_H */
#define CY_PINS_TRxEnableB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "TRxEnableB_aliases.h"


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
} TRxEnableB_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   TRxEnableB_Read(void);
void    TRxEnableB_Write(uint8 value);
uint8   TRxEnableB_ReadDataReg(void);
#if defined(TRxEnableB__PC) || (CY_PSOC4_4200L) 
    void    TRxEnableB_SetDriveMode(uint8 mode);
#endif
void    TRxEnableB_SetInterruptMode(uint16 position, uint16 mode);
uint8   TRxEnableB_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void TRxEnableB_Sleep(void); 
void TRxEnableB_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(TRxEnableB__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define TRxEnableB_DRIVE_MODE_BITS        (3)
    #define TRxEnableB_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - TRxEnableB_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the TRxEnableB_SetDriveMode() function.
         *  @{
         */
        #define TRxEnableB_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define TRxEnableB_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define TRxEnableB_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define TRxEnableB_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define TRxEnableB_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define TRxEnableB_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define TRxEnableB_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define TRxEnableB_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define TRxEnableB_MASK               TRxEnableB__MASK
#define TRxEnableB_SHIFT              TRxEnableB__SHIFT
#define TRxEnableB_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in TRxEnableB_SetInterruptMode() function.
     *  @{
     */
        #define TRxEnableB_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define TRxEnableB_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define TRxEnableB_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define TRxEnableB_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(TRxEnableB__SIO)
    #define TRxEnableB_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(TRxEnableB__PC) && (CY_PSOC4_4200L)
    #define TRxEnableB_USBIO_ENABLE               ((uint32)0x80000000u)
    #define TRxEnableB_USBIO_DISABLE              ((uint32)(~TRxEnableB_USBIO_ENABLE))
    #define TRxEnableB_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define TRxEnableB_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define TRxEnableB_USBIO_ENTER_SLEEP          ((uint32)((1u << TRxEnableB_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << TRxEnableB_USBIO_SUSPEND_DEL_SHIFT)))
    #define TRxEnableB_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << TRxEnableB_USBIO_SUSPEND_SHIFT)))
    #define TRxEnableB_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << TRxEnableB_USBIO_SUSPEND_DEL_SHIFT)))
    #define TRxEnableB_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(TRxEnableB__PC)
    /* Port Configuration */
    #define TRxEnableB_PC                 (* (reg32 *) TRxEnableB__PC)
#endif
/* Pin State */
#define TRxEnableB_PS                     (* (reg32 *) TRxEnableB__PS)
/* Data Register */
#define TRxEnableB_DR                     (* (reg32 *) TRxEnableB__DR)
/* Input Buffer Disable Override */
#define TRxEnableB_INP_DIS                (* (reg32 *) TRxEnableB__PC2)

/* Interrupt configuration Registers */
#define TRxEnableB_INTCFG                 (* (reg32 *) TRxEnableB__INTCFG)
#define TRxEnableB_INTSTAT                (* (reg32 *) TRxEnableB__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define TRxEnableB_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(TRxEnableB__SIO)
    #define TRxEnableB_SIO_REG            (* (reg32 *) TRxEnableB__SIO)
#endif /* (TRxEnableB__SIO_CFG) */

/* USBIO registers */
#if !defined(TRxEnableB__PC) && (CY_PSOC4_4200L)
    #define TRxEnableB_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define TRxEnableB_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define TRxEnableB_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define TRxEnableB_DRIVE_MODE_SHIFT       (0x00u)
#define TRxEnableB_DRIVE_MODE_MASK        (0x07u << TRxEnableB_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins TRxEnableB_H */


/* [] END OF FILE */
