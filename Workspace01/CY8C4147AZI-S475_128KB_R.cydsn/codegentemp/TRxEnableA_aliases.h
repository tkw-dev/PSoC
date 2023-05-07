/*******************************************************************************
* File Name: TRxEnableA.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_TRxEnableA_ALIASES_H) /* Pins TRxEnableA_ALIASES_H */
#define CY_PINS_TRxEnableA_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define TRxEnableA_0			(TRxEnableA__0__PC)
#define TRxEnableA_0_PS		(TRxEnableA__0__PS)
#define TRxEnableA_0_PC		(TRxEnableA__0__PC)
#define TRxEnableA_0_DR		(TRxEnableA__0__DR)
#define TRxEnableA_0_SHIFT	(TRxEnableA__0__SHIFT)
#define TRxEnableA_0_INTR	((uint16)((uint16)0x0003u << (TRxEnableA__0__SHIFT*2u)))

#define TRxEnableA_INTR_ALL	 ((uint16)(TRxEnableA_0_INTR))


#endif /* End Pins TRxEnableA_ALIASES_H */


/* [] END OF FILE */
