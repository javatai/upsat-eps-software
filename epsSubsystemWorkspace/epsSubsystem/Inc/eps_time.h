/*
 * eps_time.h
 *
 *  Created on: Jul 17, 2016
 *      Author: ariolis
 */

#ifndef INC_EPS_TIME_H_
#define INC_EPS_TIME_H_

#include "stm32l1xx_hal.h"


#define SUBSYSTEM_TIMEOUT_PERIOD 2400 /*this value times TIMED_EVENT_PERIOD is the period that eps waits a timeout ping from every subsystem or it resets the subsystem that has not responded in time.*/

extern volatile uint32_t EPS_time_counter; /*a counter that increments at every interrupt every TIMED_EVENT_PERIOD microseconds */



uint32_t EPS_time_counter_get(void);


void EPS_time_counter_increment(void);


#endif /* INC_EPS_TIME_H_ */
