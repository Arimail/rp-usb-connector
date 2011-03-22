/*
 * working_mode.h
 *
 *  Created on: Jun 26, 2010
 *      Author: Tony Huang
 */

#ifndef WORKING_MODE_H_
#define WORKING_MODE_H_

enum BRIDGE_WORKING_MODE_T
{
    MODE_RF_AP  = 0,
    MODE_AVR_DOPER = 1,
};

extern volatile _u8    bridgeWorkingMode;

#endif /* WORKING_MODE_H_ */
