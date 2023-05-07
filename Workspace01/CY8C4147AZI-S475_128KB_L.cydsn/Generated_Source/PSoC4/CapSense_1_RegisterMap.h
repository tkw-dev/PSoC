/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (20u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCC000014u)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (24u)
#define CapSense_1_SNS_STATUS0_SIZE                         (2u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x80000018u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (26u)
#define CapSense_1_SNS_STATUS1_SIZE                         (2u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x8C00001Au)

#define CapSense_1_SNS_STATUS2_VALUE                        (CapSense_1_dsRam.snsStatus[2u])
#define CapSense_1_SNS_STATUS2_OFFSET                       (28u)
#define CapSense_1_SNS_STATUS2_SIZE                         (2u)
#define CapSense_1_SNS_STATUS2_PARAM_ID                     (0x8100001Cu)

#define CapSense_1_SNS_STATUS3_VALUE                        (CapSense_1_dsRam.snsStatus[3u])
#define CapSense_1_SNS_STATUS3_OFFSET                       (30u)
#define CapSense_1_SNS_STATUS3_SIZE                         (2u)
#define CapSense_1_SNS_STATUS3_PARAM_ID                     (0x8D00001Eu)

#define CapSense_1_SNS_STATUS4_VALUE                        (CapSense_1_dsRam.snsStatus[4u])
#define CapSense_1_SNS_STATUS4_OFFSET                       (32u)
#define CapSense_1_SNS_STATUS4_SIZE                         (2u)
#define CapSense_1_SNS_STATUS4_PARAM_ID                     (0x8D000020u)

#define CapSense_1_SNS_STATUS5_VALUE                        (CapSense_1_dsRam.snsStatus[5u])
#define CapSense_1_SNS_STATUS5_OFFSET                       (34u)
#define CapSense_1_SNS_STATUS5_SIZE                         (2u)
#define CapSense_1_SNS_STATUS5_PARAM_ID                     (0x81000022u)

#define CapSense_1_SNS_STATUS6_VALUE                        (CapSense_1_dsRam.snsStatus[6u])
#define CapSense_1_SNS_STATUS6_OFFSET                       (36u)
#define CapSense_1_SNS_STATUS6_SIZE                         (2u)
#define CapSense_1_SNS_STATUS6_PARAM_ID                     (0x8C000024u)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (38u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xA6800026u)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (40u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x61800028u)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (42u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0xA580002Au)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (44u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0xA880002Cu)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (46u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x6C80002Eu)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (47u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x6A80002Fu)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (48u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x66800030u)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (49u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x60800031u)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (50u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x6A800032u)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (51u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x4A000033u)

#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button0.rowIdacMod[0u])
#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_OFFSET             (52u)
#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_PARAM_ID           (0x41000034u)

#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button0.idacGainIndex)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_OFFSET           (53u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_PARAM_ID         (0x4A800035u)

#define CapSense_1_BUTTON0_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button0.snsClk)
#define CapSense_1_BUTTON0_SNS_CLK_OFFSET                   (54u)
#define CapSense_1_BUTTON0_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0xA3800036u)

#define CapSense_1_BUTTON0_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button0.rowSnsClk)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_OFFSET               (56u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_PARAM_ID             (0x87800038u)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (58u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4380003Au)

#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button0.rowSnsClkSource)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_OFFSET        (59u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4580003Bu)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (60u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0xAE81003Cu)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (62u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0xA281003Eu)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (64u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x67810040u)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (65u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x61810041u)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (66u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x6B810042u)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (67u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x6D810043u)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (68u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x66810044u)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (69u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x46010045u)

#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button1.rowIdacMod[0u])
#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_OFFSET             (70u)
#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_PARAM_ID           (0x4C010046u)

#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button1.idacGainIndex)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_OFFSET           (71u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_PARAM_ID         (0x47810047u)

#define CapSense_1_BUTTON1_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button1.snsClk)
#define CapSense_1_BUTTON1_SNS_CLK_OFFSET                   (72u)
#define CapSense_1_BUTTON1_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON1_SNS_CLK_PARAM_ID                 (0xAD810048u)

#define CapSense_1_BUTTON1_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button1.rowSnsClk)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_OFFSET               (74u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_PARAM_ID             (0x8A81004Au)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (76u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x4F81004Cu)

#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button1.rowSnsClkSource)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_OFFSET        (77u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4981004Du)

#define CapSense_1_TOUCHPAD0_RESOLUTION_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_1_TOUCHPAD0_RESOLUTION_OFFSET              (78u)
#define CapSense_1_TOUCHPAD0_RESOLUTION_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_RESOLUTION_PARAM_ID            (0xA582004Eu)

#define CapSense_1_TOUCHPAD0_FINGER_TH_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_1_TOUCHPAD0_FINGER_TH_OFFSET               (80u)
#define CapSense_1_TOUCHPAD0_FINGER_TH_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_FINGER_TH_PARAM_ID             (0xAF820050u)

#define CapSense_1_TOUCHPAD0_NOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_1_TOUCHPAD0_NOISE_TH_OFFSET                (82u)
#define CapSense_1_TOUCHPAD0_NOISE_TH_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NOISE_TH_PARAM_ID              (0x6B820052u)

#define CapSense_1_TOUCHPAD0_NNOISE_TH_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_OFFSET               (83u)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_SIZE                 (1u)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_PARAM_ID             (0x6D820053u)

#define CapSense_1_TOUCHPAD0_HYSTERESIS_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_OFFSET              (84u)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_SIZE                (1u)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_PARAM_ID            (0x66820054u)

#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_VALUE              (CapSense_1_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_OFFSET             (85u)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_SIZE               (1u)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID           (0x60820055u)

#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_VALUE             (CapSense_1_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_OFFSET            (86u)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_SIZE              (1u)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID          (0x6A820056u)

#define CapSense_1_TOUCHPAD0_IDAC_MOD0_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.idacMod[0u])
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_OFFSET               (87u)
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_SIZE                 (1u)
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_PARAM_ID             (0x4A020057u)

#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_VALUE            (CapSense_1_dsRam.wdgtList.touchpad0.rowIdacMod[0u])
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_OFFSET           (88u)
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_SIZE             (1u)
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_PARAM_ID         (0x43020058u)

#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE          (CapSense_1_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET         (89u)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID       (0x48820059u)

#define CapSense_1_TOUCHPAD0_SNS_CLK_VALUE                  (CapSense_1_dsRam.wdgtList.touchpad0.snsClk)
#define CapSense_1_TOUCHPAD0_SNS_CLK_OFFSET                 (90u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SIZE                   (2u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_PARAM_ID               (0xA182005Au)

#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_VALUE              (CapSense_1_dsRam.wdgtList.touchpad0.rowSnsClk)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_OFFSET             (92u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SIZE               (2u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_PARAM_ID           (0xAC82005Cu)

#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_VALUE           (CapSense_1_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET          (94u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID        (0x4382005Eu)

#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_VALUE       (CapSense_1_dsRam.wdgtList.touchpad0.rowSnsClkSource)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_OFFSET      (95u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_SIZE        (1u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_PARAM_ID    (0x4582005Fu)

#define CapSense_1_TOUCHPAD0_POS_X_VALUE                    (CapSense_1_dsRam.wdgtList.touchpad0.posX)
#define CapSense_1_TOUCHPAD0_POS_X_OFFSET                   (96u)
#define CapSense_1_TOUCHPAD0_POS_X_SIZE                     (2u)
#define CapSense_1_TOUCHPAD0_POS_X_PARAM_ID                 (0x86020060u)

#define CapSense_1_TOUCHPAD0_POS_Y_VALUE                    (CapSense_1_dsRam.wdgtList.touchpad0.posY)
#define CapSense_1_TOUCHPAD0_POS_Y_OFFSET                   (98u)
#define CapSense_1_TOUCHPAD0_POS_Y_SIZE                     (2u)
#define CapSense_1_TOUCHPAD0_POS_Y_PARAM_ID                 (0x8A020062u)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (100u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0xA2830064u)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (102u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0xAE830066u)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (104u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x69830068u)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (105u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x6F830069u)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (106u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x6583006Au)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (107u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x6383006Bu)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (108u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x6883006Cu)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (109u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x4803006Du)

#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button2.rowIdacMod[0u])
#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_OFFSET             (110u)
#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_PARAM_ID           (0x4203006Eu)

#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button2.idacGainIndex)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_OFFSET           (111u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_PARAM_ID         (0x4983006Fu)

#define CapSense_1_BUTTON2_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button2.snsClk)
#define CapSense_1_BUTTON2_SNS_CLK_OFFSET                   (112u)
#define CapSense_1_BUTTON2_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON2_SNS_CLK_PARAM_ID                 (0xA6830070u)

#define CapSense_1_BUTTON2_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button2.rowSnsClk)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_OFFSET               (114u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_PARAM_ID             (0x81830072u)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (116u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x44830074u)

#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button2.rowSnsClkSource)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_OFFSET        (117u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x42830075u)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (118u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0xA2840076u)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (120u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0xAD840078u)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (122u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x6984007Au)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (123u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x6F84007Bu)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (124u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x6484007Cu)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (125u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x6284007Du)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (126u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x6884007Eu)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (127u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x4804007Fu)

#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button3.rowIdacMod[0u])
#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_OFFSET             (128u)
#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_PARAM_ID           (0x40040080u)

#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button3.idacGainIndex)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_OFFSET           (129u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_PARAM_ID         (0x4B840081u)

#define CapSense_1_BUTTON3_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button3.snsClk)
#define CapSense_1_BUTTON3_SNS_CLK_OFFSET                   (130u)
#define CapSense_1_BUTTON3_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON3_SNS_CLK_PARAM_ID                 (0xA2840082u)

#define CapSense_1_BUTTON3_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button3.rowSnsClk)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_OFFSET               (132u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_PARAM_ID             (0x84840084u)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (134u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x40840086u)

#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button3.rowSnsClkSource)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_OFFSET        (135u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x46840087u)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (136u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0xAF850088u)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (138u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0xA385008Au)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (140u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x6685008Cu)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (141u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x6085008Du)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (142u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x6A85008Eu)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (143u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x6C85008Fu)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (144u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x60850090u)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (145u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x40050091u)

#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button4.rowIdacMod[0u])
#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_OFFSET             (146u)
#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_PARAM_ID           (0x4A050092u)

#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button4.idacGainIndex)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_OFFSET           (147u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_PARAM_ID         (0x41850093u)

#define CapSense_1_BUTTON4_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button4.snsClk)
#define CapSense_1_BUTTON4_SNS_CLK_OFFSET                   (148u)
#define CapSense_1_BUTTON4_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON4_SNS_CLK_PARAM_ID                 (0xA9850094u)

#define CapSense_1_BUTTON4_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button4.rowSnsClk)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_OFFSET               (150u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_PARAM_ID             (0x8E850096u)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (152u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x49850098u)

#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button4.rowSnsClkSource)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_OFFSET        (153u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4F850099u)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (154u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0xA386009Au)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (156u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0xAE86009Cu)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (158u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x6A86009Eu)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (159u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x6C86009Fu)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (160u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x6A8600A0u)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (161u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x6C8600A1u)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (162u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x668600A2u)

#define CapSense_1_BUTTON5_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_1_BUTTON5_IDAC_MOD0_OFFSET                 (163u)
#define CapSense_1_BUTTON5_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD0_PARAM_ID               (0x460600A3u)

#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button5.rowIdacMod[0u])
#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_OFFSET             (164u)
#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_PARAM_ID           (0x4D0600A4u)

#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button5.idacGainIndex)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_OFFSET           (165u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_PARAM_ID         (0x468600A5u)

#define CapSense_1_BUTTON5_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button5.snsClk)
#define CapSense_1_BUTTON5_SNS_CLK_OFFSET                   (166u)
#define CapSense_1_BUTTON5_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON5_SNS_CLK_PARAM_ID                 (0xAF8600A6u)

#define CapSense_1_BUTTON5_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button5.rowSnsClk)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_OFFSET               (168u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_PARAM_ID             (0x8B8600A8u)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (170u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x4F8600AAu)

#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button5.rowSnsClkSource)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_OFFSET        (171u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x498600ABu)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (172u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x8D0000ACu)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (174u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x810000AEu)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (176u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x430000B0u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (178u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x870000B2u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (180u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x420000B4u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (181u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x440000B5u)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (182u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x860000B6u)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (184u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x890000B8u)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (186u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x4D0000BAu)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (188u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x880000BCu)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (190u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4C0000BEu)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (191u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x4A0000BFu)

#define CapSense_1_TOUCHPAD0_COL0_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL0_RAW0_OFFSET               (192u)
#define CapSense_1_TOUCHPAD0_COL0_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL0_RAW0_PARAM_ID             (0x890000C0u)

#define CapSense_1_TOUCHPAD0_COL0_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_OFFSET              (194u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_PARAM_ID            (0x850000C2u)

#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_OFFSET          (196u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_PARAM_ID        (0x400000C4u)

#define CapSense_1_TOUCHPAD0_COL0_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_OFFSET               (198u)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_PARAM_ID             (0x840000C6u)

#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_OFFSET  (200u)
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_PARAM_ID (0x430000C8u)

#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_OFFSET         (201u)
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_PARAM_ID       (0x450000C9u)

#define CapSense_1_TOUCHPAD0_COL1_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL1_RAW0_OFFSET               (202u)
#define CapSense_1_TOUCHPAD0_COL1_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL1_RAW0_PARAM_ID             (0x870000CAu)

#define CapSense_1_TOUCHPAD0_COL1_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_OFFSET              (204u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_PARAM_ID            (0x8A0000CCu)

#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_OFFSET          (206u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_PARAM_ID        (0x4E0000CEu)

#define CapSense_1_TOUCHPAD0_COL1_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_OFFSET               (208u)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_PARAM_ID             (0x8C0000D0u)

#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_OFFSET  (210u)
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_PARAM_ID (0x480000D2u)

#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_OFFSET         (211u)
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_PARAM_ID       (0x4E0000D3u)

#define CapSense_1_TOUCHPAD0_COL2_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL2_RAW0_OFFSET               (212u)
#define CapSense_1_TOUCHPAD0_COL2_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL2_RAW0_PARAM_ID             (0x8D0000D4u)

#define CapSense_1_TOUCHPAD0_COL2_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_OFFSET              (214u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_PARAM_ID            (0x810000D6u)

#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_OFFSET          (216u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_PARAM_ID        (0x460000D8u)

#define CapSense_1_TOUCHPAD0_COL2_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_OFFSET               (218u)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_PARAM_ID             (0x820000DAu)

#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_OFFSET  (220u)
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_PARAM_ID (0x470000DCu)

#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_OFFSET         (221u)
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_PARAM_ID       (0x410000DDu)

#define CapSense_1_TOUCHPAD0_COL3_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL3_RAW0_OFFSET               (222u)
#define CapSense_1_TOUCHPAD0_COL3_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL3_RAW0_PARAM_ID             (0x830000DEu)

#define CapSense_1_TOUCHPAD0_COL3_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_OFFSET              (224u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_PARAM_ID            (0x830000E0u)

#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_OFFSET          (226u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_PARAM_ID        (0x470000E2u)

#define CapSense_1_TOUCHPAD0_COL3_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_OFFSET               (228u)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_PARAM_ID             (0x820000E4u)

#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_OFFSET  (230u)
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_PARAM_ID (0x460000E6u)

#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_OFFSET         (231u)
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_PARAM_ID       (0x400000E7u)

#define CapSense_1_TOUCHPAD0_COL4_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL4_RAW0_OFFSET               (232u)
#define CapSense_1_TOUCHPAD0_COL4_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL4_RAW0_PARAM_ID             (0x810000E8u)

#define CapSense_1_TOUCHPAD0_COL4_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_OFFSET              (234u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_PARAM_ID            (0x8D0000EAu)

#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_OFFSET          (236u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_PARAM_ID        (0x480000ECu)

#define CapSense_1_TOUCHPAD0_COL4_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_OFFSET               (238u)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_PARAM_ID             (0x8C0000EEu)

#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_OFFSET  (240u)
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E0000F0u)

#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_OFFSET         (241u)
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_PARAM_ID       (0x480000F1u)

#define CapSense_1_TOUCHPAD0_COL5_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL5_RAW0_OFFSET               (242u)
#define CapSense_1_TOUCHPAD0_COL5_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL5_RAW0_PARAM_ID             (0x8A0000F2u)

#define CapSense_1_TOUCHPAD0_COL5_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_OFFSET              (244u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_PARAM_ID            (0x870000F4u)

#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_OFFSET          (246u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_PARAM_ID        (0x430000F6u)

#define CapSense_1_TOUCHPAD0_COL5_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_OFFSET               (248u)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_PARAM_ID             (0x840000F8u)

#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_OFFSET  (250u)
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_PARAM_ID (0x400000FAu)

#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_OFFSET         (251u)
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_PARAM_ID       (0x460000FBu)

#define CapSense_1_TOUCHPAD0_ROW0_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_OFFSET               (252u)
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_PARAM_ID             (0x850000FCu)

#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_OFFSET              (254u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_PARAM_ID            (0x890000FEu)

#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_OFFSET          (256u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_PARAM_ID        (0x44000100u)

#define CapSense_1_TOUCHPAD0_ROW0_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_OFFSET               (258u)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_PARAM_ID             (0x80000102u)

#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_OFFSET  (260u)
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000104u)

#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_OFFSET         (261u)
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_PARAM_ID       (0x43000105u)

#define CapSense_1_TOUCHPAD0_ROW1_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_OFFSET               (262u)
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_PARAM_ID             (0x81000106u)

#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_OFFSET              (264u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_PARAM_ID            (0x8E000108u)

#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_OFFSET          (266u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_PARAM_ID        (0x4A00010Au)

#define CapSense_1_TOUCHPAD0_ROW1_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_OFFSET               (268u)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_PARAM_ID             (0x8F00010Cu)

#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_OFFSET  (270u)
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B00010Eu)

#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_OFFSET         (271u)
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_PARAM_ID       (0x4D00010Fu)

#define CapSense_1_TOUCHPAD0_ROW2_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_OFFSET               (272u)
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_PARAM_ID             (0x89000110u)

#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_OFFSET              (274u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_PARAM_ID            (0x85000112u)

#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_OFFSET          (276u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_PARAM_ID        (0x40000114u)

#define CapSense_1_TOUCHPAD0_ROW2_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_OFFSET               (278u)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_PARAM_ID             (0x84000116u)

#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_OFFSET  (280u)
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_PARAM_ID (0x43000118u)

#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_OFFSET         (281u)
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_PARAM_ID       (0x45000119u)

#define CapSense_1_TOUCHPAD0_ROW3_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_OFFSET               (282u)
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_PARAM_ID             (0x8700011Au)

#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_OFFSET              (284u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_PARAM_ID            (0x8A00011Cu)

#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_OFFSET          (286u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_PARAM_ID        (0x4E00011Eu)

#define CapSense_1_TOUCHPAD0_ROW3_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_OFFSET               (288u)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_PARAM_ID             (0x86000120u)

#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_OFFSET  (290u)
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_PARAM_ID (0x42000122u)

#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_OFFSET         (291u)
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_PARAM_ID       (0x44000123u)

#define CapSense_1_TOUCHPAD0_ROW4_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_OFFSET               (292u)
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_PARAM_ID             (0x87000124u)

#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_OFFSET              (294u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_PARAM_ID            (0x8B000126u)

#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_OFFSET          (296u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_PARAM_ID        (0x4C000128u)

#define CapSense_1_TOUCHPAD0_ROW4_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_OFFSET               (298u)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_PARAM_ID             (0x8800012Au)

#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_OFFSET  (300u)
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D00012Cu)

#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_OFFSET         (301u)
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_PARAM_ID       (0x4B00012Du)

#define CapSense_1_TOUCHPAD0_ROW5_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_OFFSET               (302u)
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_PARAM_ID             (0x8900012Eu)

#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_OFFSET              (304u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_PARAM_ID            (0x83000130u)

#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_OFFSET          (306u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_PARAM_ID        (0x47000132u)

#define CapSense_1_TOUCHPAD0_ROW5_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_OFFSET               (308u)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_PARAM_ID             (0x82000134u)

#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_OFFSET  (310u)
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_PARAM_ID (0x46000136u)

#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_OFFSET         (311u)
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_PARAM_ID       (0x40000137u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (312u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x81000138u)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (314u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x8D00013Au)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (316u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x4800013Cu)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (318u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x8C00013Eu)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (320u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x49000140u)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (321u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x4F000141u)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (322u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x8D000142u)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (324u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x80000144u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (326u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x44000146u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (328u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x83000148u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (330u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4700014Au)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (331u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x4100014Bu)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (332u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x8200014Cu)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (334u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x8E00014Eu)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (336u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x4C000150u)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (338u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x88000152u)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (340u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4D000154u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (341u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x4B000155u)

#define CapSense_1_BUTTON5_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_SNS0_RAW0_OFFSET                 (342u)
#define CapSense_1_BUTTON5_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW0_PARAM_ID               (0x89000156u)

#define CapSense_1_BUTTON5_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN0_OFFSET                (344u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_PARAM_ID              (0x86000158u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_OFFSET            (346u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID          (0x4200015Au)

#define CapSense_1_BUTTON5_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_SNS0_DIFF_OFFSET                 (348u)
#define CapSense_1_BUTTON5_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_DIFF_PARAM_ID               (0x8700015Cu)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (350u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4300015Eu)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_OFFSET           (351u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID         (0x4500015Fu)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (352u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x68000160u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (353u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x6E000161u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (354u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x87000162u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (356u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8A000164u)

#define CapSense_1_SCAN_CSD_ISC_VALUE                       (CapSense_1_dsRam.scanCsdISC)
#define CapSense_1_SCAN_CSD_ISC_OFFSET                      (358u)
#define CapSense_1_SCAN_CSD_ISC_SIZE                        (1u)
#define CapSense_1_SCAN_CSD_ISC_PARAM_ID                    (0x4E000166u)

#define CapSense_1_SCAN_CURRENT_ISC_VALUE                   (CapSense_1_dsRam.scanCurrentISC)
#define CapSense_1_SCAN_CURRENT_ISC_OFFSET                  (359u)
#define CapSense_1_SCAN_CURRENT_ISC_SIZE                    (1u)
#define CapSense_1_SCAN_CURRENT_ISC_PARAM_ID                (0x48000167u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_1_BUTTON0_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BUTTON0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_1_BUTTON0_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_1_BUTTON0_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_1_BUTTON0_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BUTTON0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_1_BUTTON0_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BUTTON0_TYPE_OFFSET                      (26u)
#define CapSense_1_BUTTON0_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_1_BUTTON0_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BUTTON0_NUM_COLS_OFFSET                  (27u)
#define CapSense_1_BUTTON0_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_1_BUTTON0_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numRows)
#define CapSense_1_BUTTON0_NUM_ROWS_OFFSET                  (28u)
#define CapSense_1_BUTTON0_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_ROWS_PARAM_ID                (0x5000001Cu)

#define CapSense_1_BUTTON0_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[0].xResolution)
#define CapSense_1_BUTTON0_X_RESOLUTION_OFFSET              (30u)
#define CapSense_1_BUTTON0_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON0_X_RESOLUTION_PARAM_ID            (0x9400001Eu)

#define CapSense_1_BUTTON0_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[0].yResolution)
#define CapSense_1_BUTTON0_Y_RESOLUTION_OFFSET              (32u)
#define CapSense_1_BUTTON0_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON0_Y_RESOLUTION_PARAM_ID            (0x94000020u)

#define CapSense_1_BUTTON0_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_1_BUTTON0_X_CENT_MULT_OFFSET               (36u)
#define CapSense_1_BUTTON0_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON0_X_CENT_MULT_PARAM_ID             (0xDA000024u)

#define CapSense_1_BUTTON0_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define CapSense_1_BUTTON0_Y_CENT_MULT_OFFSET               (40u)
#define CapSense_1_BUTTON0_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON0_Y_CENT_MULT_PARAM_ID             (0xD9000028u)

#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_OFFSET          (44u)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_PARAM_ID        (0x5F00002Cu)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (48u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xDD010030u)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (52u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xDC010034u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (56u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xDF010038u)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (60u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDE01003Cu)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (64u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDF010040u)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (68u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDE010044u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (72u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x92010048u)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (74u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x5601004Au)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (75u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x5001004Bu)

#define CapSense_1_BUTTON1_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numRows)
#define CapSense_1_BUTTON1_NUM_ROWS_OFFSET                  (76u)
#define CapSense_1_BUTTON1_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_ROWS_PARAM_ID                (0x5B01004Cu)

#define CapSense_1_BUTTON1_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[1].xResolution)
#define CapSense_1_BUTTON1_X_RESOLUTION_OFFSET              (78u)
#define CapSense_1_BUTTON1_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON1_X_RESOLUTION_PARAM_ID            (0x9F01004Eu)

#define CapSense_1_BUTTON1_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[1].yResolution)
#define CapSense_1_BUTTON1_Y_RESOLUTION_OFFSET              (80u)
#define CapSense_1_BUTTON1_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON1_Y_RESOLUTION_PARAM_ID            (0x95010050u)

#define CapSense_1_BUTTON1_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define CapSense_1_BUTTON1_X_CENT_MULT_OFFSET               (84u)
#define CapSense_1_BUTTON1_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON1_X_CENT_MULT_PARAM_ID             (0xDB010054u)

#define CapSense_1_BUTTON1_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[1].yCentroidMultiplier)
#define CapSense_1_BUTTON1_Y_CENT_MULT_OFFSET               (88u)
#define CapSense_1_BUTTON1_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON1_Y_CENT_MULT_PARAM_ID             (0xD8010058u)

#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[1].iirFilterCoeff)
#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_OFFSET          (92u)
#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_PARAM_ID        (0x5E01005Cu)

#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_VALUE            (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_OFFSET           (96u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_SIZE             (4u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_PARAM_ID         (0xD0020060u)

#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_OFFSET              (100u)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_SIZE                (4u)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_PARAM_ID            (0xD1020064u)

#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_OFFSET             (104u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_PARAM_ID           (0xD2020068u)

#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_VALUE         (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_OFFSET        (108u)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_SIZE          (4u)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_PARAM_ID      (0xD302006Cu)

#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_VALUE             (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_OFFSET            (112u)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_SIZE              (4u)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_PARAM_ID          (0xD5020070u)

#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_VALUE            (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_OFFSET           (116u)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_SIZE             (4u)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_PARAM_ID         (0xD4020074u)

#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_VALUE            (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_OFFSET           (120u)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_SIZE             (2u)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_PARAM_ID         (0x98020078u)

#define CapSense_1_TOUCHPAD0_TYPE_VALUE                     (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_TOUCHPAD0_TYPE_OFFSET                    (122u)
#define CapSense_1_TOUCHPAD0_TYPE_SIZE                      (1u)
#define CapSense_1_TOUCHPAD0_TYPE_PARAM_ID                  (0x5C02007Au)

#define CapSense_1_TOUCHPAD0_NUM_COLS_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_TOUCHPAD0_NUM_COLS_OFFSET                (123u)
#define CapSense_1_TOUCHPAD0_NUM_COLS_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NUM_COLS_PARAM_ID              (0x5A02007Bu)

#define CapSense_1_TOUCHPAD0_NUM_ROWS_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].numRows)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_OFFSET                (124u)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_PARAM_ID              (0x5102007Cu)

#define CapSense_1_TOUCHPAD0_X_RESOLUTION_VALUE             (CapSense_1_dsFlash.wdgtArray[2].xResolution)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_OFFSET            (126u)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_SIZE              (2u)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_PARAM_ID          (0x9502007Eu)

#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_VALUE             (CapSense_1_dsFlash.wdgtArray[2].yResolution)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_OFFSET            (128u)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_SIZE              (2u)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_PARAM_ID          (0x9B020080u)

#define CapSense_1_TOUCHPAD0_X_CENT_MULT_VALUE              (CapSense_1_dsFlash.wdgtArray[2].xCentroidMultiplier)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_OFFSET             (132u)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_PARAM_ID           (0xD5020084u)

#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_VALUE              (CapSense_1_dsFlash.wdgtArray[2].yCentroidMultiplier)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_OFFSET             (136u)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_PARAM_ID           (0xD6020088u)

#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_VALUE         (CapSense_1_dsFlash.wdgtArray[2].iirFilterCoeff)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET        (140u)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_SIZE          (1u)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID      (0x5002008Cu)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (144u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xD2030090u)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (148u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xD3030094u)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (152u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xD0030098u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (156u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xD103009Cu)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (160u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xDD0300A0u)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (164u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xDC0300A4u)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (168u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x900300A8u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (170u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x540300AAu)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (171u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x520300ABu)

#define CapSense_1_BUTTON2_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numRows)
#define CapSense_1_BUTTON2_NUM_ROWS_OFFSET                  (172u)
#define CapSense_1_BUTTON2_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_ROWS_PARAM_ID                (0x590300ACu)

#define CapSense_1_BUTTON2_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[3].xResolution)
#define CapSense_1_BUTTON2_X_RESOLUTION_OFFSET              (174u)
#define CapSense_1_BUTTON2_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON2_X_RESOLUTION_PARAM_ID            (0x9D0300AEu)

#define CapSense_1_BUTTON2_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[3].yResolution)
#define CapSense_1_BUTTON2_Y_RESOLUTION_OFFSET              (176u)
#define CapSense_1_BUTTON2_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON2_Y_RESOLUTION_PARAM_ID            (0x970300B0u)

#define CapSense_1_BUTTON2_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[3].xCentroidMultiplier)
#define CapSense_1_BUTTON2_X_CENT_MULT_OFFSET               (180u)
#define CapSense_1_BUTTON2_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON2_X_CENT_MULT_PARAM_ID             (0xD90300B4u)

#define CapSense_1_BUTTON2_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[3].yCentroidMultiplier)
#define CapSense_1_BUTTON2_Y_CENT_MULT_OFFSET               (184u)
#define CapSense_1_BUTTON2_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON2_Y_CENT_MULT_PARAM_ID             (0xDA0300B8u)

#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[3].iirFilterCoeff)
#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_OFFSET          (188u)
#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_PARAM_ID        (0x5C0300BCu)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (192u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xD30400C0u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (196u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xD20400C4u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (200u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xD10400C8u)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (204u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD00400CCu)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (208u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD60400D0u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (212u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD70400D4u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (216u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x9B0400D8u)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (218u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x5F0400DAu)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (219u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x590400DBu)

#define CapSense_1_BUTTON3_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numRows)
#define CapSense_1_BUTTON3_NUM_ROWS_OFFSET                  (220u)
#define CapSense_1_BUTTON3_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_ROWS_PARAM_ID                (0x520400DCu)

#define CapSense_1_BUTTON3_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[4].xResolution)
#define CapSense_1_BUTTON3_X_RESOLUTION_OFFSET              (222u)
#define CapSense_1_BUTTON3_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON3_X_RESOLUTION_PARAM_ID            (0x960400DEu)

#define CapSense_1_BUTTON3_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[4].yResolution)
#define CapSense_1_BUTTON3_Y_RESOLUTION_OFFSET              (224u)
#define CapSense_1_BUTTON3_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON3_Y_RESOLUTION_PARAM_ID            (0x960400E0u)

#define CapSense_1_BUTTON3_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[4].xCentroidMultiplier)
#define CapSense_1_BUTTON3_X_CENT_MULT_OFFSET               (228u)
#define CapSense_1_BUTTON3_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON3_X_CENT_MULT_PARAM_ID             (0xD80400E4u)

#define CapSense_1_BUTTON3_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[4].yCentroidMultiplier)
#define CapSense_1_BUTTON3_Y_CENT_MULT_OFFSET               (232u)
#define CapSense_1_BUTTON3_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON3_Y_CENT_MULT_PARAM_ID             (0xDB0400E8u)

#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[4].iirFilterCoeff)
#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_OFFSET          (236u)
#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_PARAM_ID        (0x5D0400ECu)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (240u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xDF0500F0u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (244u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xDE0500F4u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (248u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xDD0500F8u)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (252u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xDC0500FCu)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (256u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xD5050100u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (260u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xD4050104u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (264u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x98050108u)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (266u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x5C05010Au)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (267u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5A05010Bu)

#define CapSense_1_BUTTON4_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numRows)
#define CapSense_1_BUTTON4_NUM_ROWS_OFFSET                  (268u)
#define CapSense_1_BUTTON4_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_ROWS_PARAM_ID                (0x5105010Cu)

#define CapSense_1_BUTTON4_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[5].xResolution)
#define CapSense_1_BUTTON4_X_RESOLUTION_OFFSET              (270u)
#define CapSense_1_BUTTON4_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON4_X_RESOLUTION_PARAM_ID            (0x9505010Eu)

#define CapSense_1_BUTTON4_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[5].yResolution)
#define CapSense_1_BUTTON4_Y_RESOLUTION_OFFSET              (272u)
#define CapSense_1_BUTTON4_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON4_Y_RESOLUTION_PARAM_ID            (0x9F050110u)

#define CapSense_1_BUTTON4_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[5].xCentroidMultiplier)
#define CapSense_1_BUTTON4_X_CENT_MULT_OFFSET               (276u)
#define CapSense_1_BUTTON4_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON4_X_CENT_MULT_PARAM_ID             (0xD1050114u)

#define CapSense_1_BUTTON4_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[5].yCentroidMultiplier)
#define CapSense_1_BUTTON4_Y_CENT_MULT_OFFSET               (280u)
#define CapSense_1_BUTTON4_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON4_Y_CENT_MULT_PARAM_ID             (0xD2050118u)

#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[5].iirFilterCoeff)
#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_OFFSET          (284u)
#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_PARAM_ID        (0x5405011Cu)

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (288u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xDA060120u)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (292u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xDB060124u)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (296u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xD8060128u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (300u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xD906012Cu)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (304u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xDF060130u)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (308u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xDE060134u)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (312u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x92060138u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (314u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x5606013Au)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (315u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x5006013Bu)

#define CapSense_1_BUTTON5_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numRows)
#define CapSense_1_BUTTON5_NUM_ROWS_OFFSET                  (316u)
#define CapSense_1_BUTTON5_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_ROWS_PARAM_ID                (0x5B06013Cu)

#define CapSense_1_BUTTON5_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[6].xResolution)
#define CapSense_1_BUTTON5_X_RESOLUTION_OFFSET              (318u)
#define CapSense_1_BUTTON5_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON5_X_RESOLUTION_PARAM_ID            (0x9F06013Eu)

#define CapSense_1_BUTTON5_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[6].yResolution)
#define CapSense_1_BUTTON5_Y_RESOLUTION_OFFSET              (320u)
#define CapSense_1_BUTTON5_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON5_Y_RESOLUTION_PARAM_ID            (0x92060140u)

#define CapSense_1_BUTTON5_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[6].xCentroidMultiplier)
#define CapSense_1_BUTTON5_X_CENT_MULT_OFFSET               (324u)
#define CapSense_1_BUTTON5_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON5_X_CENT_MULT_PARAM_ID             (0xDC060144u)

#define CapSense_1_BUTTON5_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[6].yCentroidMultiplier)
#define CapSense_1_BUTTON5_Y_CENT_MULT_OFFSET               (328u)
#define CapSense_1_BUTTON5_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON5_Y_CENT_MULT_PARAM_ID             (0xDF060148u)

#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[6].iirFilterCoeff)
#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_OFFSET          (332u)
#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_PARAM_ID        (0x5906014Cu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
