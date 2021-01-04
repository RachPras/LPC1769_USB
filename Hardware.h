
#include "LPC17xx.h"
#include <stdbool.h>



/******************************************   SYSTEM_CLOCK  ***********************************************************/
#define SYSTEM_CLOCK                 120000000
/******************************************   UART  *******************************************************************/
// UART
#define IER_RBR						 0x01
#define IER_THRE					 0x02
#define IER_RLS						 0x04
#define IIR_RLS						 0x06
#define IIR_RDA						 0x04
#define LSR_RDR						 0x01
#define LSR_OE						 0x02
#define LSR_PE						 0x04
#define LSR_FE						 0x08
#define LSR_BI						 0x10
#define LSR_THRE					 0x20
#define LSR_TEMT					 0x40
#define LSR_RXFE					 0x80
/******************************************   Watch Dog  *******************************************************************/
#define WDT_FEED_VALUE	             0x7270E0     // 1sec
/***************************************************************************************************************************/
void SystemMaxClockInit (void);
void UART0_Init(int baudrate);
void UART2_Init(int baudrate);
void UART3_Init(int baudrate);
void UART0_Sendchar(char c);
void UART2_Sendchar(char c);
void UART3_Sendchar(char c);
char UART0_Getchar(void);
char UART2_Getchar(void);
char UART3_Getchar(void);
char UART2_Recvchar(void);	
void WatchDogInit (void);
void WDTFeed( void );
uint32_t USBConnectionTest(void);
void USBWritePortEnableStatus (void);
/*****************************************************************************************************************************/
/*******************************************          END FILE           *****************************************************/
/*****************************************************************************************************************************/
/*****************************************************************************************************************************/

