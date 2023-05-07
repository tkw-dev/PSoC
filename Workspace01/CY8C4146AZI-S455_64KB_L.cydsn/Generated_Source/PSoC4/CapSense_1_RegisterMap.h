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
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0x8E80002Au)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (44u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0x8380002Cu)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (46u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x4780002Eu)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (47u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x4180002Fu)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (48u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x4D800030u)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (49u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x4B800031u)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (50u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x41800032u)

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
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0x88800036u)

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

#define CapSense_1_BUTTON0_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button0.fingerCap)
#define CapSense_1_BUTTON0_FINGER_CAP_OFFSET                (60u)
#define CapSense_1_BUTTON0_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON0_FINGER_CAP_PARAM_ID              (0xA000003Cu)

#define CapSense_1_BUTTON0_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button0.sigPFC)
#define CapSense_1_BUTTON0_SIGPFC_OFFSET                    (62u)
#define CapSense_1_BUTTON0_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON0_SIGPFC_PARAM_ID                  (0xAC00003Eu)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (64u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0x84810040u)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (66u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0x88810042u)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (68u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x4D810044u)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (69u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x4B810045u)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (70u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x41810046u)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (71u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x47810047u)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (72u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x4E810048u)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (73u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x45010049u)

#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button1.rowIdacMod[0u])
#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_OFFSET             (74u)
#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON1_ROW_IDAC_MOD0_PARAM_ID           (0x4F01004Au)

#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button1.idacGainIndex)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_OFFSET           (75u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_PARAM_ID         (0x4481004Bu)

#define CapSense_1_BUTTON1_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button1.snsClk)
#define CapSense_1_BUTTON1_SNS_CLK_OFFSET                   (76u)
#define CapSense_1_BUTTON1_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON1_SNS_CLK_PARAM_ID                 (0x8781004Cu)

#define CapSense_1_BUTTON1_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button1.rowSnsClk)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_OFFSET               (78u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_PARAM_ID             (0x8B81004Eu)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (80u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x49810050u)

#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button1.rowSnsClkSource)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_OFFSET        (81u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON1_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4F810051u)

#define CapSense_1_BUTTON1_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button1.fingerCap)
#define CapSense_1_BUTTON1_FINGER_CAP_OFFSET                (82u)
#define CapSense_1_BUTTON1_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON1_FINGER_CAP_PARAM_ID              (0xAB010052u)

#define CapSense_1_BUTTON1_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button1.sigPFC)
#define CapSense_1_BUTTON1_SIGPFC_OFFSET                    (84u)
#define CapSense_1_BUTTON1_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON1_SIGPFC_PARAM_ID                  (0xA6010054u)

#define CapSense_1_TOUCHPAD0_RESOLUTION_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_1_TOUCHPAD0_RESOLUTION_OFFSET              (86u)
#define CapSense_1_TOUCHPAD0_RESOLUTION_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_RESOLUTION_PARAM_ID            (0x89820056u)

#define CapSense_1_TOUCHPAD0_FINGER_TH_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_1_TOUCHPAD0_FINGER_TH_OFFSET               (88u)
#define CapSense_1_TOUCHPAD0_FINGER_TH_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_FINGER_TH_PARAM_ID             (0x86820058u)

#define CapSense_1_TOUCHPAD0_NOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_1_TOUCHPAD0_NOISE_TH_OFFSET                (90u)
#define CapSense_1_TOUCHPAD0_NOISE_TH_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NOISE_TH_PARAM_ID              (0x4282005Au)

#define CapSense_1_TOUCHPAD0_NNOISE_TH_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_OFFSET               (91u)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_SIZE                 (1u)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_PARAM_ID             (0x4482005Bu)

#define CapSense_1_TOUCHPAD0_HYSTERESIS_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_OFFSET              (92u)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_SIZE                (1u)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_PARAM_ID            (0x4F82005Cu)

#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_VALUE              (CapSense_1_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_OFFSET             (93u)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_SIZE               (1u)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID           (0x4982005Du)

#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_VALUE             (CapSense_1_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_OFFSET            (94u)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_SIZE              (1u)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID          (0x4382005Eu)

#define CapSense_1_TOUCHPAD0_IDAC_MOD0_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.idacMod[0u])
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_OFFSET               (95u)
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_SIZE                 (1u)
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_PARAM_ID             (0x4802005Fu)

#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_VALUE            (CapSense_1_dsRam.wdgtList.touchpad0.rowIdacMod[0u])
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_OFFSET           (96u)
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_SIZE             (1u)
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_PARAM_ID         (0x4E020060u)

#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE          (CapSense_1_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET         (97u)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID       (0x45820061u)

#define CapSense_1_TOUCHPAD0_SNS_CLK_VALUE                  (CapSense_1_dsRam.wdgtList.touchpad0.snsClk)
#define CapSense_1_TOUCHPAD0_SNS_CLK_OFFSET                 (98u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SIZE                   (2u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_PARAM_ID               (0x87820062u)

#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_VALUE              (CapSense_1_dsRam.wdgtList.touchpad0.rowSnsClk)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_OFFSET             (100u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SIZE               (2u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_PARAM_ID           (0x8A820064u)

#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_VALUE           (CapSense_1_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET          (102u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID        (0x4E820066u)

#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_VALUE       (CapSense_1_dsRam.wdgtList.touchpad0.rowSnsClkSource)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_OFFSET      (103u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_SIZE        (1u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_PARAM_ID    (0x48820067u)

#define CapSense_1_TOUCHPAD0_FINGER_CAP_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.fingerCap)
#define CapSense_1_TOUCHPAD0_FINGER_CAP_OFFSET              (104u)
#define CapSense_1_TOUCHPAD0_FINGER_CAP_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_FINGER_CAP_PARAM_ID            (0xAF020068u)

#define CapSense_1_TOUCHPAD0_SIGPFC_VALUE                   (CapSense_1_dsRam.wdgtList.touchpad0.sigPFC)
#define CapSense_1_TOUCHPAD0_SIGPFC_OFFSET                  (106u)
#define CapSense_1_TOUCHPAD0_SIGPFC_SIZE                    (2u)
#define CapSense_1_TOUCHPAD0_SIGPFC_PARAM_ID                (0xA302006Au)

#define CapSense_1_TOUCHPAD0_POS_X_VALUE                    (CapSense_1_dsRam.wdgtList.touchpad0.posX)
#define CapSense_1_TOUCHPAD0_POS_X_OFFSET                   (108u)
#define CapSense_1_TOUCHPAD0_POS_X_SIZE                     (2u)
#define CapSense_1_TOUCHPAD0_POS_X_PARAM_ID                 (0x8502006Cu)

#define CapSense_1_TOUCHPAD0_POS_Y_VALUE                    (CapSense_1_dsRam.wdgtList.touchpad0.posY)
#define CapSense_1_TOUCHPAD0_POS_Y_OFFSET                   (110u)
#define CapSense_1_TOUCHPAD0_POS_Y_SIZE                     (2u)
#define CapSense_1_TOUCHPAD0_POS_Y_PARAM_ID                 (0x8902006Eu)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (112u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0x8D830070u)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (114u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0x81830072u)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (116u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x44830074u)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (117u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x42830075u)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (118u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x48830076u)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (119u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x4E830077u)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (120u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x47830078u)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (121u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x4C030079u)

#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button2.rowIdacMod[0u])
#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_OFFSET             (122u)
#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON2_ROW_IDAC_MOD0_PARAM_ID           (0x4603007Au)

#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button2.idacGainIndex)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_OFFSET           (123u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_PARAM_ID         (0x4D83007Bu)

#define CapSense_1_BUTTON2_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button2.snsClk)
#define CapSense_1_BUTTON2_SNS_CLK_OFFSET                   (124u)
#define CapSense_1_BUTTON2_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON2_SNS_CLK_PARAM_ID                 (0x8E83007Cu)

#define CapSense_1_BUTTON2_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button2.rowSnsClk)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_OFFSET               (126u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_PARAM_ID             (0x8283007Eu)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (128u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x44830080u)

#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button2.rowSnsClkSource)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_OFFSET        (129u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON2_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x42830081u)

#define CapSense_1_BUTTON2_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button2.fingerCap)
#define CapSense_1_BUTTON2_FINGER_CAP_OFFSET                (130u)
#define CapSense_1_BUTTON2_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON2_FINGER_CAP_PARAM_ID              (0xA6030082u)

#define CapSense_1_BUTTON2_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button2.sigPFC)
#define CapSense_1_BUTTON2_SIGPFC_OFFSET                    (132u)
#define CapSense_1_BUTTON2_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON2_SIGPFC_PARAM_ID                  (0xAB030084u)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (134u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0x88840086u)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (136u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0x87840088u)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (138u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x4384008Au)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (139u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x4584008Bu)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (140u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x4E84008Cu)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (141u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x4884008Du)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (142u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x4284008Eu)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (143u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x4904008Fu)

#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button3.rowIdacMod[0u])
#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_OFFSET             (144u)
#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON3_ROW_IDAC_MOD0_PARAM_ID           (0x45040090u)

#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button3.idacGainIndex)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_OFFSET           (145u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_PARAM_ID         (0x4E840091u)

#define CapSense_1_BUTTON3_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button3.snsClk)
#define CapSense_1_BUTTON3_SNS_CLK_OFFSET                   (146u)
#define CapSense_1_BUTTON3_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON3_SNS_CLK_PARAM_ID                 (0x8C840092u)

#define CapSense_1_BUTTON3_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button3.rowSnsClk)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_OFFSET               (148u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_PARAM_ID             (0x81840094u)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (150u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x45840096u)

#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button3.rowSnsClkSource)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_OFFSET        (151u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON3_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x43840097u)

#define CapSense_1_BUTTON3_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button3.fingerCap)
#define CapSense_1_BUTTON3_FINGER_CAP_OFFSET                (152u)
#define CapSense_1_BUTTON3_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON3_FINGER_CAP_PARAM_ID              (0xA4040098u)

#define CapSense_1_BUTTON3_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button3.sigPFC)
#define CapSense_1_BUTTON3_SIGPFC_OFFSET                    (154u)
#define CapSense_1_BUTTON3_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON3_SIGPFC_PARAM_ID                  (0xA804009Au)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (156u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0x8085009Cu)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (158u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0x8C85009Eu)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (160u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x448500A0u)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (161u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x428500A1u)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (162u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x488500A2u)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (163u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x4E8500A3u)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (164u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x458500A4u)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (165u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x4E0500A5u)

#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button4.rowIdacMod[0u])
#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_OFFSET             (166u)
#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON4_ROW_IDAC_MOD0_PARAM_ID           (0x440500A6u)

#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button4.idacGainIndex)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_OFFSET           (167u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_PARAM_ID         (0x4F8500A7u)

#define CapSense_1_BUTTON4_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button4.snsClk)
#define CapSense_1_BUTTON4_SNS_CLK_OFFSET                   (168u)
#define CapSense_1_BUTTON4_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON4_SNS_CLK_PARAM_ID                 (0x8E8500A8u)

#define CapSense_1_BUTTON4_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button4.rowSnsClk)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_OFFSET               (170u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_PARAM_ID             (0x828500AAu)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (172u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x478500ACu)

#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button4.rowSnsClkSource)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_OFFSET        (173u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON4_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x418500ADu)

#define CapSense_1_BUTTON4_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button4.fingerCap)
#define CapSense_1_BUTTON4_FINGER_CAP_OFFSET                (174u)
#define CapSense_1_BUTTON4_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON4_FINGER_CAP_PARAM_ID              (0xA50500AEu)

#define CapSense_1_BUTTON4_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button4.sigPFC)
#define CapSense_1_BUTTON4_SIGPFC_OFFSET                    (176u)
#define CapSense_1_BUTTON4_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON4_SIGPFC_PARAM_ID                  (0xAF0500B0u)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (178u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0x808600B2u)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (180u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0x8D8600B4u)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (182u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x498600B6u)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (183u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x4F8600B7u)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (184u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x468600B8u)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (185u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x408600B9u)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (186u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x4A8600BAu)

#define CapSense_1_BUTTON5_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_1_BUTTON5_IDAC_MOD0_OFFSET                 (187u)
#define CapSense_1_BUTTON5_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD0_PARAM_ID               (0x410600BBu)

#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button5.rowIdacMod[0u])
#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_OFFSET             (188u)
#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON5_ROW_IDAC_MOD0_PARAM_ID           (0x4A0600BCu)

#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button5.idacGainIndex)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_OFFSET           (189u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_PARAM_ID         (0x418600BDu)

#define CapSense_1_BUTTON5_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button5.snsClk)
#define CapSense_1_BUTTON5_SNS_CLK_OFFSET                   (190u)
#define CapSense_1_BUTTON5_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON5_SNS_CLK_PARAM_ID                 (0x838600BEu)

#define CapSense_1_BUTTON5_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button5.rowSnsClk)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_OFFSET               (192u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_PARAM_ID             (0x8E8600C0u)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (194u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x4A8600C2u)

#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button5.rowSnsClkSource)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_OFFSET        (195u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON5_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4C8600C3u)

#define CapSense_1_BUTTON5_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button5.fingerCap)
#define CapSense_1_BUTTON5_FINGER_CAP_OFFSET                (196u)
#define CapSense_1_BUTTON5_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON5_FINGER_CAP_PARAM_ID              (0xA90600C4u)

#define CapSense_1_BUTTON5_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button5.sigPFC)
#define CapSense_1_BUTTON5_SIGPFC_OFFSET                    (198u)
#define CapSense_1_BUTTON5_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON5_SIGPFC_PARAM_ID                  (0xA50600C6u)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (200u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x8B0000C8u)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (202u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x870000CAu)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (204u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x420000CCu)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (206u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x860000CEu)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (208u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x440000D0u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (209u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x420000D1u)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (210u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x800000D2u)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (212u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x8D0000D4u)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (214u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x490000D6u)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (216u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x8E0000D8u)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (218u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4A0000DAu)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (219u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x4C0000DBu)

#define CapSense_1_TOUCHPAD0_COL0_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL0_RAW0_OFFSET               (220u)
#define CapSense_1_TOUCHPAD0_COL0_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL0_RAW0_PARAM_ID             (0x8F0000DCu)

#define CapSense_1_TOUCHPAD0_COL0_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_OFFSET              (222u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_PARAM_ID            (0x830000DEu)

#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_OFFSET          (224u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_PARAM_ID        (0x4B0000E0u)

#define CapSense_1_TOUCHPAD0_COL0_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_OFFSET               (226u)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_PARAM_ID             (0x8F0000E2u)

#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_OFFSET  (228u)
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A0000E4u)

#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_OFFSET         (229u)
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_PARAM_ID       (0x4C0000E5u)

#define CapSense_1_TOUCHPAD0_COL1_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL1_RAW0_OFFSET               (230u)
#define CapSense_1_TOUCHPAD0_COL1_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL1_RAW0_PARAM_ID             (0x8E0000E6u)

#define CapSense_1_TOUCHPAD0_COL1_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_OFFSET              (232u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_PARAM_ID            (0x810000E8u)

#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_OFFSET          (234u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_PARAM_ID        (0x450000EAu)

#define CapSense_1_TOUCHPAD0_COL1_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_OFFSET               (236u)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_PARAM_ID             (0x800000ECu)

#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_OFFSET  (238u)
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_PARAM_ID (0x440000EEu)

#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_OFFSET         (239u)
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_PARAM_ID       (0x420000EFu)

#define CapSense_1_TOUCHPAD0_COL2_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL2_RAW0_OFFSET               (240u)
#define CapSense_1_TOUCHPAD0_COL2_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL2_RAW0_PARAM_ID             (0x860000F0u)

#define CapSense_1_TOUCHPAD0_COL2_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_OFFSET              (242u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_PARAM_ID            (0x8A0000F2u)

#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_OFFSET          (244u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_PARAM_ID        (0x4F0000F4u)

#define CapSense_1_TOUCHPAD0_COL2_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_OFFSET               (246u)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_PARAM_ID             (0x8B0000F6u)

#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_OFFSET  (248u)
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0000F8u)

#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_OFFSET         (249u)
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_PARAM_ID       (0x4A0000F9u)

#define CapSense_1_TOUCHPAD0_COL3_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL3_RAW0_OFFSET               (250u)
#define CapSense_1_TOUCHPAD0_COL3_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL3_RAW0_PARAM_ID             (0x880000FAu)

#define CapSense_1_TOUCHPAD0_COL3_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_OFFSET              (252u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_PARAM_ID            (0x850000FCu)

#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_OFFSET          (254u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_PARAM_ID        (0x410000FEu)

#define CapSense_1_TOUCHPAD0_COL3_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_OFFSET               (256u)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_PARAM_ID             (0x8C000100u)

#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_OFFSET  (258u)
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_PARAM_ID (0x48000102u)

#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_OFFSET         (259u)
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_PARAM_ID       (0x4E000103u)

#define CapSense_1_TOUCHPAD0_COL4_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL4_RAW0_OFFSET               (260u)
#define CapSense_1_TOUCHPAD0_COL4_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL4_RAW0_PARAM_ID             (0x8D000104u)

#define CapSense_1_TOUCHPAD0_COL4_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_OFFSET              (262u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_PARAM_ID            (0x81000106u)

#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_OFFSET          (264u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_PARAM_ID        (0x46000108u)

#define CapSense_1_TOUCHPAD0_COL4_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_OFFSET               (266u)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_PARAM_ID             (0x8200010Au)

#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_OFFSET  (268u)
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4700010Cu)

#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_OFFSET         (269u)
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_PARAM_ID       (0x4100010Du)

#define CapSense_1_TOUCHPAD0_COL5_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL5_RAW0_OFFSET               (270u)
#define CapSense_1_TOUCHPAD0_COL5_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL5_RAW0_PARAM_ID             (0x8300010Eu)

#define CapSense_1_TOUCHPAD0_COL5_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_OFFSET              (272u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_PARAM_ID            (0x89000110u)

#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_OFFSET          (274u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_PARAM_ID        (0x4D000112u)

#define CapSense_1_TOUCHPAD0_COL5_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_OFFSET               (276u)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_PARAM_ID             (0x88000114u)

#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_OFFSET  (278u)
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C000116u)

#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_OFFSET         (279u)
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_PARAM_ID       (0x4A000117u)

#define CapSense_1_TOUCHPAD0_ROW0_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_OFFSET               (280u)
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_PARAM_ID             (0x8B000118u)

#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_OFFSET              (282u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_PARAM_ID            (0x8700011Au)

#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_OFFSET          (284u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_PARAM_ID        (0x4200011Cu)

#define CapSense_1_TOUCHPAD0_ROW0_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_OFFSET               (286u)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_PARAM_ID             (0x8600011Eu)

#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_OFFSET  (288u)
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E000120u)

#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_OFFSET         (289u)
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_PARAM_ID       (0x48000121u)

#define CapSense_1_TOUCHPAD0_ROW1_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_OFFSET               (290u)
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_PARAM_ID             (0x8A000122u)

#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_OFFSET              (292u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_PARAM_ID            (0x87000124u)

#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_OFFSET          (294u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_PARAM_ID        (0x43000126u)

#define CapSense_1_TOUCHPAD0_ROW1_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_OFFSET               (296u)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_PARAM_ID             (0x84000128u)

#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_OFFSET  (298u)
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4000012Au)

#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_OFFSET         (299u)
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_PARAM_ID       (0x4600012Bu)

#define CapSense_1_TOUCHPAD0_ROW2_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_OFFSET               (300u)
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_PARAM_ID             (0x8500012Cu)

#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_OFFSET              (302u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_PARAM_ID            (0x8900012Eu)

#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_OFFSET          (304u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_PARAM_ID        (0x4B000130u)

#define CapSense_1_TOUCHPAD0_ROW2_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_OFFSET               (306u)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_PARAM_ID             (0x8F000132u)

#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_OFFSET  (308u)
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A000134u)

#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_OFFSET         (309u)
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_PARAM_ID       (0x4C000135u)

#define CapSense_1_TOUCHPAD0_ROW3_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_OFFSET               (310u)
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_PARAM_ID             (0x8E000136u)

#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_OFFSET              (312u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_PARAM_ID            (0x81000138u)

#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_OFFSET          (314u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_PARAM_ID        (0x4500013Au)

#define CapSense_1_TOUCHPAD0_ROW3_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_OFFSET               (316u)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_PARAM_ID             (0x8000013Cu)

#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_OFFSET  (318u)
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4400013Eu)

#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_OFFSET         (319u)
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_PARAM_ID       (0x4200013Fu)

#define CapSense_1_TOUCHPAD0_ROW4_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_OFFSET               (320u)
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_PARAM_ID             (0x81000140u)

#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_OFFSET              (322u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_PARAM_ID            (0x8D000142u)

#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_OFFSET          (324u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_PARAM_ID        (0x48000144u)

#define CapSense_1_TOUCHPAD0_ROW4_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_OFFSET               (326u)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_PARAM_ID             (0x8C000146u)

#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_OFFSET  (328u)
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000148u)

#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_OFFSET         (329u)
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_PARAM_ID       (0x4D000149u)

#define CapSense_1_TOUCHPAD0_ROW5_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_OFFSET               (330u)
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_PARAM_ID             (0x8F00014Au)

#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_OFFSET              (332u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_PARAM_ID            (0x8200014Cu)

#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_OFFSET          (334u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_PARAM_ID        (0x4600014Eu)

#define CapSense_1_TOUCHPAD0_ROW5_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_OFFSET               (336u)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_PARAM_ID             (0x84000150u)

#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_OFFSET  (338u)
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_PARAM_ID (0x40000152u)

#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_OFFSET         (339u)
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_PARAM_ID       (0x46000153u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (340u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x85000154u)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (342u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x89000156u)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (344u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x4E000158u)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (346u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x8A00015Au)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (348u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4F00015Cu)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (349u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x4900015Du)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (350u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x8B00015Eu)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (352u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x8B000160u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (354u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x4F000162u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (356u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x8A000164u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (358u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4E000166u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (359u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x48000167u)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (360u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x89000168u)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (362u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x8500016Au)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (364u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x4000016Cu)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (366u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x8400016Eu)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (368u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x46000170u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (369u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x40000171u)

#define CapSense_1_BUTTON5_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_SNS0_RAW0_OFFSET                 (370u)
#define CapSense_1_BUTTON5_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW0_PARAM_ID               (0x82000172u)

#define CapSense_1_BUTTON5_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN0_OFFSET                (372u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_PARAM_ID              (0x8F000174u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_OFFSET            (374u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID          (0x4B000176u)

#define CapSense_1_BUTTON5_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_SNS0_DIFF_OFFSET                 (376u)
#define CapSense_1_BUTTON5_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_DIFF_PARAM_ID               (0x8C000178u)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (378u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4800017Au)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_OFFSET           (379u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID         (0x4E00017Bu)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (380u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x6E00017Cu)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (381u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x6800017Du)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (382u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x8100017Eu)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (384u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8F000180u)

#define CapSense_1_SCAN_CSD_ISC_VALUE                       (CapSense_1_dsRam.scanCsdISC)
#define CapSense_1_SCAN_CSD_ISC_OFFSET                      (386u)
#define CapSense_1_SCAN_CSD_ISC_SIZE                        (1u)
#define CapSense_1_SCAN_CSD_ISC_PARAM_ID                    (0x4B000182u)

#define CapSense_1_SCAN_CURRENT_ISC_VALUE                   (CapSense_1_dsRam.scanCurrentISC)
#define CapSense_1_SCAN_CURRENT_ISC_OFFSET                  (387u)
#define CapSense_1_SCAN_CURRENT_ISC_SIZE                    (1u)
#define CapSense_1_SCAN_CURRENT_ISC_PARAM_ID                (0x4D000183u)


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

#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_OFFSET           (44u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID         (0xD800002Cu)

#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_OFFSET          (48u)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_PARAM_ID        (0x59000030u)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (52u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xDC010034u)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (56u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xDF010038u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (60u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xDE01003Cu)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (64u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDF010040u)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (68u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDE010044u)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (72u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDD010048u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (76u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x9301004Cu)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (78u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x5701004Eu)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (79u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x5101004Fu)

#define CapSense_1_BUTTON1_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numRows)
#define CapSense_1_BUTTON1_NUM_ROWS_OFFSET                  (80u)
#define CapSense_1_BUTTON1_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_ROWS_PARAM_ID                (0x5D010050u)

#define CapSense_1_BUTTON1_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[1].xResolution)
#define CapSense_1_BUTTON1_X_RESOLUTION_OFFSET              (82u)
#define CapSense_1_BUTTON1_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON1_X_RESOLUTION_PARAM_ID            (0x99010052u)

#define CapSense_1_BUTTON1_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[1].yResolution)
#define CapSense_1_BUTTON1_Y_RESOLUTION_OFFSET              (84u)
#define CapSense_1_BUTTON1_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON1_Y_RESOLUTION_PARAM_ID            (0x94010054u)

#define CapSense_1_BUTTON1_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define CapSense_1_BUTTON1_X_CENT_MULT_OFFSET               (88u)
#define CapSense_1_BUTTON1_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON1_X_CENT_MULT_PARAM_ID             (0xD8010058u)

#define CapSense_1_BUTTON1_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[1].yCentroidMultiplier)
#define CapSense_1_BUTTON1_Y_CENT_MULT_OFFSET               (92u)
#define CapSense_1_BUTTON1_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON1_Y_CENT_MULT_PARAM_ID             (0xD901005Cu)

#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_OFFSET           (96u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_PARAM_ID         (0xD5010060u)

#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[1].iirFilterCoeff)
#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_OFFSET          (100u)
#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON1_IIR_FILTER_COEFF_PARAM_ID        (0x53010064u)

#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_VALUE            (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_OFFSET           (104u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_SIZE             (4u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_PARAM_ID         (0xD2020068u)

#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_OFFSET              (108u)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_SIZE                (4u)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_PARAM_ID            (0xD302006Cu)

#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_OFFSET             (112u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_PARAM_ID           (0xD5020070u)

#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_VALUE         (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_OFFSET        (116u)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_SIZE          (4u)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_PARAM_ID      (0xD4020074u)

#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_VALUE             (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_OFFSET            (120u)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_SIZE              (4u)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_PARAM_ID          (0xD7020078u)

#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_VALUE            (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_OFFSET           (124u)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_SIZE             (4u)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_PARAM_ID         (0xD602007Cu)

#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_VALUE            (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_OFFSET           (128u)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_SIZE             (2u)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_PARAM_ID         (0x9B020080u)

#define CapSense_1_TOUCHPAD0_TYPE_VALUE                     (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_TOUCHPAD0_TYPE_OFFSET                    (130u)
#define CapSense_1_TOUCHPAD0_TYPE_SIZE                      (1u)
#define CapSense_1_TOUCHPAD0_TYPE_PARAM_ID                  (0x5F020082u)

#define CapSense_1_TOUCHPAD0_NUM_COLS_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_TOUCHPAD0_NUM_COLS_OFFSET                (131u)
#define CapSense_1_TOUCHPAD0_NUM_COLS_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NUM_COLS_PARAM_ID              (0x59020083u)

#define CapSense_1_TOUCHPAD0_NUM_ROWS_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].numRows)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_OFFSET                (132u)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_PARAM_ID              (0x52020084u)

#define CapSense_1_TOUCHPAD0_X_RESOLUTION_VALUE             (CapSense_1_dsFlash.wdgtArray[2].xResolution)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_OFFSET            (134u)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_SIZE              (2u)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_PARAM_ID          (0x96020086u)

#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_VALUE             (CapSense_1_dsFlash.wdgtArray[2].yResolution)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_OFFSET            (136u)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_SIZE              (2u)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_PARAM_ID          (0x99020088u)

#define CapSense_1_TOUCHPAD0_X_CENT_MULT_VALUE              (CapSense_1_dsFlash.wdgtArray[2].xCentroidMultiplier)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_OFFSET             (140u)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_PARAM_ID           (0xD702008Cu)

#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_VALUE              (CapSense_1_dsFlash.wdgtArray[2].yCentroidMultiplier)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_OFFSET             (144u)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_PARAM_ID           (0xD1020090u)

#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_VALUE          (CapSense_1_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_OFFSET         (148u)
#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_SIZE           (4u)
#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_PARAM_ID       (0xD0020094u)

#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_VALUE         (CapSense_1_dsFlash.wdgtArray[2].iirFilterCoeff)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET        (152u)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_SIZE          (1u)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID      (0x54020098u)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (156u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xD103009Cu)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (160u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xDD0300A0u)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (164u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xDC0300A4u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (168u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xDF0300A8u)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (172u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xDE0300ACu)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (176u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xD80300B0u)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (180u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x960300B4u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (182u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x520300B6u)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (183u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x540300B7u)

#define CapSense_1_BUTTON2_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numRows)
#define CapSense_1_BUTTON2_NUM_ROWS_OFFSET                  (184u)
#define CapSense_1_BUTTON2_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_ROWS_PARAM_ID                (0x5D0300B8u)

#define CapSense_1_BUTTON2_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[3].xResolution)
#define CapSense_1_BUTTON2_X_RESOLUTION_OFFSET              (186u)
#define CapSense_1_BUTTON2_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON2_X_RESOLUTION_PARAM_ID            (0x990300BAu)

#define CapSense_1_BUTTON2_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[3].yResolution)
#define CapSense_1_BUTTON2_Y_RESOLUTION_OFFSET              (188u)
#define CapSense_1_BUTTON2_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON2_Y_RESOLUTION_PARAM_ID            (0x940300BCu)

#define CapSense_1_BUTTON2_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[3].xCentroidMultiplier)
#define CapSense_1_BUTTON2_X_CENT_MULT_OFFSET               (192u)
#define CapSense_1_BUTTON2_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON2_X_CENT_MULT_PARAM_ID             (0xDA0300C0u)

#define CapSense_1_BUTTON2_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[3].yCentroidMultiplier)
#define CapSense_1_BUTTON2_Y_CENT_MULT_OFFSET               (196u)
#define CapSense_1_BUTTON2_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON2_Y_CENT_MULT_PARAM_ID             (0xDB0300C4u)

#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[3].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_OFFSET           (200u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_PARAM_ID         (0xD80300C8u)

#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[3].iirFilterCoeff)
#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_OFFSET          (204u)
#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON2_IIR_FILTER_COEFF_PARAM_ID        (0x5E0300CCu)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (208u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xD60400D0u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (212u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xD70400D4u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (216u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xD40400D8u)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (220u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD50400DCu)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (224u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD90400E0u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (228u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD80400E4u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (232u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x940400E8u)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (234u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x500400EAu)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (235u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x560400EBu)

#define CapSense_1_BUTTON3_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numRows)
#define CapSense_1_BUTTON3_NUM_ROWS_OFFSET                  (236u)
#define CapSense_1_BUTTON3_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_ROWS_PARAM_ID                (0x5D0400ECu)

#define CapSense_1_BUTTON3_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[4].xResolution)
#define CapSense_1_BUTTON3_X_RESOLUTION_OFFSET              (238u)
#define CapSense_1_BUTTON3_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON3_X_RESOLUTION_PARAM_ID            (0x990400EEu)

#define CapSense_1_BUTTON3_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[4].yResolution)
#define CapSense_1_BUTTON3_Y_RESOLUTION_OFFSET              (240u)
#define CapSense_1_BUTTON3_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON3_Y_RESOLUTION_PARAM_ID            (0x930400F0u)

#define CapSense_1_BUTTON3_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[4].xCentroidMultiplier)
#define CapSense_1_BUTTON3_X_CENT_MULT_OFFSET               (244u)
#define CapSense_1_BUTTON3_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON3_X_CENT_MULT_PARAM_ID             (0xDD0400F4u)

#define CapSense_1_BUTTON3_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[4].yCentroidMultiplier)
#define CapSense_1_BUTTON3_Y_CENT_MULT_OFFSET               (248u)
#define CapSense_1_BUTTON3_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON3_Y_CENT_MULT_PARAM_ID             (0xDE0400F8u)

#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[4].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_OFFSET           (252u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_PARAM_ID         (0xDF0400FCu)

#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[4].iirFilterCoeff)
#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_OFFSET          (256u)
#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON3_IIR_FILTER_COEFF_PARAM_ID        (0x51040100u)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (260u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xD4050104u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (264u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xD7050108u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (268u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xD605010Cu)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (272u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xD0050110u)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (276u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xD1050114u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (280u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xD2050118u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (284u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x9C05011Cu)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (286u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x5805011Eu)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (287u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5E05011Fu)

#define CapSense_1_BUTTON4_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numRows)
#define CapSense_1_BUTTON4_NUM_ROWS_OFFSET                  (288u)
#define CapSense_1_BUTTON4_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_ROWS_PARAM_ID                (0x58050120u)

#define CapSense_1_BUTTON4_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[5].xResolution)
#define CapSense_1_BUTTON4_X_RESOLUTION_OFFSET              (290u)
#define CapSense_1_BUTTON4_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON4_X_RESOLUTION_PARAM_ID            (0x9C050122u)

#define CapSense_1_BUTTON4_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[5].yResolution)
#define CapSense_1_BUTTON4_Y_RESOLUTION_OFFSET              (292u)
#define CapSense_1_BUTTON4_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON4_Y_RESOLUTION_PARAM_ID            (0x91050124u)

#define CapSense_1_BUTTON4_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[5].xCentroidMultiplier)
#define CapSense_1_BUTTON4_X_CENT_MULT_OFFSET               (296u)
#define CapSense_1_BUTTON4_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON4_X_CENT_MULT_PARAM_ID             (0xDD050128u)

#define CapSense_1_BUTTON4_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[5].yCentroidMultiplier)
#define CapSense_1_BUTTON4_Y_CENT_MULT_OFFSET               (300u)
#define CapSense_1_BUTTON4_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON4_Y_CENT_MULT_PARAM_ID             (0xDC05012Cu)

#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[5].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_OFFSET           (304u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_PARAM_ID         (0xDA050130u)

#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[5].iirFilterCoeff)
#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_OFFSET          (308u)
#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON4_IIR_FILTER_COEFF_PARAM_ID        (0x5C050134u)

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (312u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xDD060138u)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (316u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xDC06013Cu)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (320u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xDD060140u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (324u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xDC060144u)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (328u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xDF060148u)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (332u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xDE06014Cu)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (336u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x97060150u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (338u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x53060152u)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (339u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x55060153u)

#define CapSense_1_BUTTON5_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numRows)
#define CapSense_1_BUTTON5_NUM_ROWS_OFFSET                  (340u)
#define CapSense_1_BUTTON5_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_ROWS_PARAM_ID                (0x5E060154u)

#define CapSense_1_BUTTON5_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[6].xResolution)
#define CapSense_1_BUTTON5_X_RESOLUTION_OFFSET              (342u)
#define CapSense_1_BUTTON5_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON5_X_RESOLUTION_PARAM_ID            (0x9A060156u)

#define CapSense_1_BUTTON5_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[6].yResolution)
#define CapSense_1_BUTTON5_Y_RESOLUTION_OFFSET              (344u)
#define CapSense_1_BUTTON5_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON5_Y_RESOLUTION_PARAM_ID            (0x95060158u)

#define CapSense_1_BUTTON5_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[6].xCentroidMultiplier)
#define CapSense_1_BUTTON5_X_CENT_MULT_OFFSET               (348u)
#define CapSense_1_BUTTON5_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON5_X_CENT_MULT_PARAM_ID             (0xDB06015Cu)

#define CapSense_1_BUTTON5_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[6].yCentroidMultiplier)
#define CapSense_1_BUTTON5_Y_CENT_MULT_OFFSET               (352u)
#define CapSense_1_BUTTON5_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON5_Y_CENT_MULT_PARAM_ID             (0xD7060160u)

#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[6].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_OFFSET           (356u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_PARAM_ID         (0xD6060164u)

#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[6].iirFilterCoeff)
#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_OFFSET          (360u)
#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON5_IIR_FILTER_COEFF_PARAM_ID        (0x52060168u)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
