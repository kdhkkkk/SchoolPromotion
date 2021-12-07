/*
 * ALL_DEF.h
 *
 *  Created on: 2020. 7. 23.
 *  Author: owner
 */

#ifndef ALL_DEF_H_
#define ALL_DEF_H_

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "iodefine.h"
#include "r_typedefs.h"

#include "BSW_Module\hanon.h"
#include "BSW_Module\adc.h"
#include "BSW_Module\clkc.h"
#include "BSW_Module\clocks.h"
#include "BSW_Module\int.h"
#include "BSW_Module\lin2.h"
#include "BSW_Module\lin2_app.h"
#include "BSW_Module\ostm.h"
#include "BSW_Module\port.h"
#include "BSW_Module\pwmd.h"
#include "BSW_Module\r_can.h"
#include "BSW_Module\r_can_table.h"
#include "BSW_Module\r_device.h"
#include "BSW_Module\r_rscan.h"
#include "BSW_Module\r_spi.h"
#include "BSW_Module\tau.h"
#include "BSW_Module\system.h"
#include "BSW_Module\VadcAutoScan.h"

#include "ASW_Module\AswMain.h"

#include "RTE_Module\RteDioService.h"
#include "RTE_Module\RteScheduling.h"
#include "RTE_Module\RteAnalogData.h"
#include "RTE_Module\RteCanMessage.h"
#include "RTE_Module\RtePwmService.h"
#include "RTE_Module\RteActrControl.h"
#include "RTE_Module\RteLinMessage.h"

#define TRUE	1
#define FALSE	0

/****************************************************************************/
/**                                                                        **/
/**                      DEFINITIONS AND MACROS                            **/
/**                                                                        **/
/****************************************************************************/
#define MISRA_INSPECTOR 1
#define SYSTEMTIMER_TICK 100U  /* us unit */


#define	TASK_PERIOD_100US	100U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_500US	500U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_1MS		1000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_5MS		5000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_10MS	10000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_25MS	25000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_50MS	50000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_100MS	100000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_200MS	200000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_500MS	500000U / SYSTEMTIMER_TICK
#define	TASK_PERIOD_1S		1000000U / SYSTEMTIMER_TICK

//#define __HANON

#define __DEBUG_MODE

#define __CONTROLLER_1 
/****************************************************************************/
/**                                                                        **/
/**                      TYPEDEFS AND STRUCTURES                           **/
/**                                                                        **/
/****************************************************************************/
typedef struct
{
    /** \brief Application information */
    uint32_t timeStamp100us;
    uint32_t timeStamp500us;
    uint32_t timeStamp1ms;
    uint32_t timeStamp5ms;
    uint32_t timeStamp10ms;
    uint32_t timeStamp25ms;
    uint32_t timeStamp50ms;
    uint32_t timeStamp100ms;
    uint32_t timeStamp200ms;
    uint32_t timeStamp500ms;
    uint32_t timeStamp1s;
} App_TimeStamp;




#endif /* ALL_DEF_H_ */
