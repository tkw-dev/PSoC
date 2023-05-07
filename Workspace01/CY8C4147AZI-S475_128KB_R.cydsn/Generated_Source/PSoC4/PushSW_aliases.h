/*******************************************************************************
* File Name: PushSW.h  
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

#if !defined(CY_PINS_PushSW_ALIASES_H) /* Pins PushSW_ALIASES_H */
#define CY_PINS_PushSW_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PushSW_0			(PushSW__0__PC)
#define PushSW_0_PS		(PushSW__0__PS)
#define PushSW_0_PC		(PushSW__0__PC)
#define PushSW_0_DR		(PushSW__0__DR)
#define PushSW_0_SHIFT	(PushSW__0__SHIFT)
#define PushSW_0_INTR	((uint16)((uint16)0x0003u << (PushSW__0__SHIFT*2u)))

#define PushSW_INTR_ALL	 ((uint16)(PushSW_0_INTR))


#endif /* End Pins PushSW_ALIASES_H */


/* [] END OF FILE */
