/*******************************************************************************
* File Name: BATTRead.h  
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

#if !defined(CY_PINS_BATTRead_ALIASES_H) /* Pins BATTRead_ALIASES_H */
#define CY_PINS_BATTRead_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define BATTRead_0			(BATTRead__0__PC)
#define BATTRead_0_PS		(BATTRead__0__PS)
#define BATTRead_0_PC		(BATTRead__0__PC)
#define BATTRead_0_DR		(BATTRead__0__DR)
#define BATTRead_0_SHIFT	(BATTRead__0__SHIFT)
#define BATTRead_0_INTR	((uint16)((uint16)0x0003u << (BATTRead__0__SHIFT*2u)))

#define BATTRead_INTR_ALL	 ((uint16)(BATTRead_0_INTR))


#endif /* End Pins BATTRead_ALIASES_H */


/* [] END OF FILE */
