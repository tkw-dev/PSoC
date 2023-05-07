/*******************************************************************************
* File Name: IlluminationPWM.h  
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

#if !defined(CY_PINS_IlluminationPWM_ALIASES_H) /* Pins IlluminationPWM_ALIASES_H */
#define CY_PINS_IlluminationPWM_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define IlluminationPWM_0			(IlluminationPWM__0__PC)
#define IlluminationPWM_0_PS		(IlluminationPWM__0__PS)
#define IlluminationPWM_0_PC		(IlluminationPWM__0__PC)
#define IlluminationPWM_0_DR		(IlluminationPWM__0__DR)
#define IlluminationPWM_0_SHIFT	(IlluminationPWM__0__SHIFT)
#define IlluminationPWM_0_INTR	((uint16)((uint16)0x0003u << (IlluminationPWM__0__SHIFT*2u)))

#define IlluminationPWM_INTR_ALL	 ((uint16)(IlluminationPWM_0_INTR))


#endif /* End Pins IlluminationPWM_ALIASES_H */


/* [] END OF FILE */
