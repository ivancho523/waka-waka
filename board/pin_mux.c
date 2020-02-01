/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: MIMXRT1011xxxxx
package_id: MIMXRT1011DAE5A
mcu_data: ksdk2_0
processor_version: 7.0.1
board: MIMXRT1010-EVK
pin_labels:
- {pin_num: '3', pin_signal: GPIO_09, label: UART1_RXD, identifier: UART1_RXD}
- {pin_num: '2', pin_signal: GPIO_10, label: UART1_TXD, identifier: UART1_TXD}
- {pin_num: '65', pin_signal: GPIO_SD_10, label: FlexSPI_CLK, identifier: FlexSPI_CLK}
- {pin_num: '66', pin_signal: GPIO_SD_09, label: FlexSPI_D0_A, identifier: FlexSPI_D0_A}
- {pin_num: '68', pin_signal: GPIO_SD_07, label: FlexSPI_D1_A, identifier: FlexSPI_D1_A}
- {pin_num: '67', pin_signal: GPIO_SD_08, label: FlexSPI_D2_A, identifier: FlexSPI_D2_A}
- {pin_num: '64', pin_signal: GPIO_SD_11, label: FlexSPI_D3_A, identifier: FlexSPI_D3_A}
- {pin_num: '69', pin_signal: GPIO_SD_06, label: FlexSPI_SS0, identifier: FlexSPI_SS0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
    BOARD_InitDEBUG_UARTPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '55', peripheral: LPSPI1, signal: PCS0, pin_signal: GPIO_AD_05}
  - {pin_num: '52', peripheral: LPSPI1, signal: SCK, pin_signal: GPIO_AD_06}
  - {pin_num: '57', peripheral: LPSPI1, signal: SDI, pin_signal: GPIO_AD_03}
  - {pin_num: '56', peripheral: LPSPI1, signal: SDO, pin_signal: GPIO_AD_04}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_03_LPSPI1_SDI,           /* GPIO_AD_03 is configured as LPSPI1_SDI */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_04_LPSPI1_SDO,           /* GPIO_AD_04 is configured as LPSPI1_SDO */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_05_LPSPI1_PCS0,          /* GPIO_AD_05 is configured as LPSPI1_PCS0 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_06_LPSPI1_SCK,           /* GPIO_AD_06 is configured as LPSPI1_SCK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '3', peripheral: LPUART1, signal: RXD, pin_signal: GPIO_09}
  - {pin_num: '2', peripheral: LPUART1, signal: TXD, pin_signal: GPIO_10}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitDEBUG_UARTPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 is configured as LPUART1_RXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 is configured as LPUART1_TXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitQSPIPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '65', peripheral: FLEXSPI, signal: FLEXSPI_A_SCLK, pin_signal: GPIO_SD_10}
  - {pin_num: '66', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA0, pin_signal: GPIO_SD_09}
  - {pin_num: '68', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA1, pin_signal: GPIO_SD_07}
  - {pin_num: '67', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA2, pin_signal: GPIO_SD_08}
  - {pin_num: '64', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA3, pin_signal: GPIO_SD_11}
  - {pin_num: '69', peripheral: FLEXSPI, signal: FLEXSPI_A_SS0_B, pin_signal: GPIO_SD_06}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitQSPIPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitQSPIPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_06_FLEXSPI_A_SS0_B,      /* GPIO_SD_06 is configured as FLEXSPI_A_SS0_B */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_07_FLEXSPI_A_DATA1,      /* GPIO_SD_07 is configured as FLEXSPI_A_DATA1 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_08_FLEXSPI_A_DATA2,      /* GPIO_SD_08 is configured as FLEXSPI_A_DATA2 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_09_FLEXSPI_A_DATA0,      /* GPIO_SD_09 is configured as FLEXSPI_A_DATA0 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_10_FLEXSPI_A_SCLK,       /* GPIO_SD_10 is configured as FLEXSPI_A_SCLK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_11_FLEXSPI_A_DATA3,      /* GPIO_SD_11 is configured as FLEXSPI_A_DATA3 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
