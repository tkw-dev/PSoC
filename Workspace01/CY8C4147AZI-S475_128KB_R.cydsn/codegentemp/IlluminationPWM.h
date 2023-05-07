/*******************************************************************************
* File Name: IlluminationPWM.h  
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

#if !defined(CY_PINS_IlluminationPWM_H) /* Pins IlluminationPWM_H */
#define CY_PINS_IlluminationPWM_H

#include "cytypes.h"
#include "cyfitter.h"
#include "IlluminationPWM_aliases.h"


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
} IlluminationPWM_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   IlluminationPWM_Read(void);
void    IlluminationPWM_Write(uint8 value);
uint8   IlluminationPWM_ReadDataReg(void);
#if defined(IlluminationPWM__PC) || (CY_PSOC4_4200L) 
    void    IlluminationPWM_SetDriveMode(uint8 mode);
#endif
void    IlluminationPWM_SetInterruptMode(uint16 position, uint16 mode);
uint8   IlluminationPWM_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void IlluminationPWM_Sleep(void); 
void IlluminationPWM_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(IlluminationPWM__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define IlluminationPWM_DRIVE_MODE_BITS        (3)
    #define IlluminationPWM_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - IlluminationPWM_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the IlluminationPWM_SetDriveMode() function.
         *  @{
         */
        #define IlluminationPWM_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define IlluminationPWM_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define IlluminationPWM_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define IlluminationPWM_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define IlluminationPWM_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define IlluminationPWM_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define IlluminationPWM_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define IlluminationPWM_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define IlluminationPWM_MASK               IlluminationPWM__MASK
#define IlluminationPWM_SHIFT              IlluminationPWM__SHIFT
#define IlluminationPWM_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in IlluminationPWM_SetInterruptMode() function.
     *  @{
     */
        #define IlluminationPWM_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define IlluminationPWM_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define IlluminationPWM_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define IlluminationPWM_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(IlluminationPWM__SIO)
    #define IlluminationPWM_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(IlluminationPWM__PC) && (CY_PSOC4_4200L)
    #define IlluminationPWM_USBIO_ENABLE               ((uint32)0x80000000u)
    #define IlluminationPWM_USBIO_DISABLE              ((uint32)(~IlluminationPWM_USBIO_ENABLE))
    #define IlluminationPWM_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define IlluminationPWM_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define IlluminationPWM_USBIO_ENTER_SLEEP          ((uint32)((1u << IlluminationPWM_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << IlluminationPWM_USBIO_SUSPEND_DEL_SHIFT)))
    #define IlluminationPWM_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << IlluminationPWM_USBIO_SUSPEND_SHIFT)))
    #define IlluminationPWM_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << IlluminationPWM_USBIO_SUSPEND_DEL_SHIFT)))
    #define IlluminationPWM_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(IlluminationPWM__PC)
    /* Port Configuration */
    #define IlluminationPWM_PC                 (* (reg32 *) IlluminationPWM__PC)
#endif
/* Pin State */
#define IlluminationPWM_PS                     (* (reg32 *) IlluminationPWM__PS)
/* Data Register */
#define IlluminationPWM_DR                     (* (reg32 *) IlluminationPWM__DR)
/* Input Buffer Disable Override */
#define IlluminationPWM_INP_DIS                (* (reg32 *) IlluminationPWM__PC2)

/* Interrupt configuration Registers */
#define IlluminationPWM_INTCFG                 (* (reg32 *) IlluminationPWM__INTCFG)
#define IlluminationPWM_INTSTAT                (* (reg32 *) IlluminationPWM__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define IlluminationPWM_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(IlluminationPWM__SIO)
    #define IlluminationPWM_SIO_REG            (* (reg32 *) IlluminationPWM__SIO)
#endif /* (IlluminationPWM__SIO_CFG) */

/* USBIO registers */
#if !defined(IlluminationPWM__PC) && (CY_PSOC4_4200L)
    #define IlluminationPWM_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define IlluminationPWM_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define IlluminationPWM_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define IlluminationPWM_DRIVE_MODE_SHIFT       (0x00u)
#define IlluminationPWM_DRIVE_MODE_MASK        (0x07u << IlluminationPWM_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins IlluminationPWM_H */


/* [] END OF FILE */
