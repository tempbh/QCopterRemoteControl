/* #include "QCopterRC.h" */

#ifndef __QCOPTERRC_H
#define __QCOPTERRC_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
typedef __IO enum {
  FSM_TX,
  FSM_RX,
  FSM_CTRL,
  FSM_UART,
  FSM_TFT
} FSM_MODE;
/*=====================================================================================================*/
/*=====================================================================================================*/
extern FSM_MODE FSM_State;
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	
