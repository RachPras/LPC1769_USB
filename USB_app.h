#include "LPC17xx.h"
#include "uart2.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "Hardware.h"
#include "ff.h"
#include "usbhost_ms.h"
#include "diskio.h"


uint8_t arr[200] =  {"Wikipedia is a multilingual open-collaborative online encyclopedia created and maintained by a community of volun"};


void USBVarSoftInit (void);
void ReadUSBMemCapacity (void);
void WriteDataIntoUSB (void);

/*****************************************************************************************************************************/
/*******************************************          END FILE           *****************************************************/
/*****************************************************************************************************************************/
/*****************************************************************************************************************************/

