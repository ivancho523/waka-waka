/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_05 (number 55), LPSPI1_PCS0/INT1_COMBO/J56[6]/J57[6]/U26[11]/U27[1] */
#define BOARD_INITPINS_LPSPI1_PCS0_PERIPHERAL                             LPSPI1   /*!< Device name: LPSPI1 */
#define BOARD_INITPINS_LPSPI1_PCS0_SIGNAL                                   PCS0   /*!< LPSPI1 signal: PCS0 */

/* GPIO_AD_06 (number 52), LPSPI1_SCK/INT2_COMBO/J56[8]/J57[12]/U26[9]/U27[6] */
#define BOARD_INITPINS_LPSPI1_SCK_PERIPHERAL                              LPSPI1   /*!< Device name: LPSPI1 */
#define BOARD_INITPINS_LPSPI1_SCK_SIGNAL                                     SCK   /*!< LPSPI1 signal: SCK */

/* GPIO_AD_03 (number 57), LPSPI1_SDI/J57[10]/U27[2] */
#define BOARD_INITPINS_LPSPI1_SDI_PERIPHERAL                              LPSPI1   /*!< Device name: LPSPI1 */
#define BOARD_INITPINS_LPSPI1_SDI_SIGNAL                                     SDI   /*!< LPSPI1 signal: SDI */

/* GPIO_AD_04 (number 56), LPSPI1_SDO/J57[8]/U27[5] */
#define BOARD_INITPINS_LPSPI1_SDO_PERIPHERAL                              LPSPI1   /*!< Device name: LPSPI1 */
#define BOARD_INITPINS_LPSPI1_SDO_SIGNAL                                     SDO   /*!< LPSPI1 signal: SDO */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* GPIO_09 (number 3), UART1_RXD */
#define BOARD_INITDEBUG_UARTPINS_UART1_RXD_PERIPHERAL                    LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITDEBUG_UARTPINS_UART1_RXD_SIGNAL                            RXD   /*!< LPUART1 signal: RXD */

/* GPIO_10 (number 2), UART1_TXD */
#define BOARD_INITDEBUG_UARTPINS_UART1_TXD_PERIPHERAL                    LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITDEBUG_UARTPINS_UART1_TXD_SIGNAL                            TXD   /*!< LPUART1 signal: TXD */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/* GPIO_SD_10 (number 65), FlexSPI_CLK */
#define BOARD_INITQSPIPINS_FlexSPI_CLK_PERIPHERAL                        FLEXSPI   /*!< Device name: FLEXSPI */
#define BOARD_INITQSPIPINS_FlexSPI_CLK_SIGNAL                     FLEXSPI_A_SCLK   /*!< FLEXSPI signal: FLEXSPI_A_SCLK */

/* GPIO_SD_09 (number 66), FlexSPI_D0_A */
#define BOARD_INITQSPIPINS_FlexSPI_D0_A_PERIPHERAL                       FLEXSPI   /*!< Device name: FLEXSPI */
#define BOARD_INITQSPIPINS_FlexSPI_D0_A_SIGNAL                   FLEXSPI_A_DATA0   /*!< FLEXSPI signal: FLEXSPI_A_DATA0 */

/* GPIO_SD_07 (number 68), FlexSPI_D1_A */
#define BOARD_INITQSPIPINS_FlexSPI_D1_A_PERIPHERAL                       FLEXSPI   /*!< Device name: FLEXSPI */
#define BOARD_INITQSPIPINS_FlexSPI_D1_A_SIGNAL                   FLEXSPI_A_DATA1   /*!< FLEXSPI signal: FLEXSPI_A_DATA1 */

/* GPIO_SD_08 (number 67), FlexSPI_D2_A */
#define BOARD_INITQSPIPINS_FlexSPI_D2_A_PERIPHERAL                       FLEXSPI   /*!< Device name: FLEXSPI */
#define BOARD_INITQSPIPINS_FlexSPI_D2_A_SIGNAL                   FLEXSPI_A_DATA2   /*!< FLEXSPI signal: FLEXSPI_A_DATA2 */

/* GPIO_SD_11 (number 64), FlexSPI_D3_A */
#define BOARD_INITQSPIPINS_FlexSPI_D3_A_PERIPHERAL                       FLEXSPI   /*!< Device name: FLEXSPI */
#define BOARD_INITQSPIPINS_FlexSPI_D3_A_SIGNAL                   FLEXSPI_A_DATA3   /*!< FLEXSPI signal: FLEXSPI_A_DATA3 */

/* GPIO_SD_06 (number 69), FlexSPI_SS0 */
#define BOARD_INITQSPIPINS_FlexSPI_SS0_PERIPHERAL                        FLEXSPI   /*!< Device name: FLEXSPI */
#define BOARD_INITQSPIPINS_FlexSPI_SS0_SIGNAL                    FLEXSPI_A_SS0_B   /*!< FLEXSPI signal: FLEXSPI_A_SS0_B */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitQSPIPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
