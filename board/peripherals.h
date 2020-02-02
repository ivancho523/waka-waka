/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_clock.h"
#include "fsl_lpspi.h"
#include "fsl_pit.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Used DMA device. */
#define DMA0_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define DMA0_DMAMUX_BASEADDR DMAMUX

  /* Channel CH0 definitions */
/* DMA0 eDMA source request. */
#define DMA0_CH0_DMA_REQUEST kDmaRequestMuxLPSPI1Tx
/* Selected eDMA channel number. */
#define DMA0_CH0_DMA_CHANNEL 0

  /* Channel CH1 definitions */
/* DMA0 eDMA source request. */
#define DMA0_CH1_DMA_REQUEST kDmaRequestMuxLPSPI1Rx
/* Selected eDMA channel number. */
#define DMA0_CH1_DMA_CHANNEL 1
/* BOARD_InitPeripherals defines for LPSPI1 */
/* Definition of peripheral ID */
#define LPSPI1_PERIPHERAL LPSPI1
/* Definition of clock source */
#define LPSPI1_CLOCK_FREQ 105600000UL
/* Transfer buffer size */
#define LPSPI1_BUFFER_SIZE 2
/* BOARD_InitPeripherals defines for PIT */
/* Definition of peripheral ID. */
#define PIT_PERIPHERAL PIT
/* Definition of clock source frequency. */
#define PIT_CLK_FREQ 62500000UL
/* Definition of ticks count for channel 0 - deprecated. */
#define PIT_0_TICKS 312499U
/* PIT interrupt vector ID (number) - deprecated. */
#define PIT_0_IRQN PIT0_IRQn
/* PIT interrupt handler identifier - deprecated. */
#define PIT_0_IRQHANDLER PIT0_IRQHandler
/* Definition of channel number for channel 0. */
#define PIT_CHANNEL_0 kPIT_Chnl_0
/* Definition of ticks count for channel 0. */
#define PIT_CHANNEL_0_TICKS 312499U
/* PIT interrupt vector ID (number). */
#define PIT_IRQN PIT_IRQn
/* PIT interrupt handler identifier. */
#define PIT_IRQHANDLER PIT_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t DMA0_config;
extern const lpspi_master_config_t LPSPI1_config;
extern lpspi_transfer_t LPSPI1_transfer;
extern lpspi_master_handle_t LPSPI1_handle;
extern uint8_t LPSPI1_txBuffer[LPSPI1_BUFFER_SIZE];
extern uint8_t LPSPI1_rxBuffer[LPSPI1_BUFFER_SIZE];
extern const pit_config_t PIT_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
