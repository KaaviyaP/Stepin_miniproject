/**
 * @file timercalculator.h
 * Calculates pulse width
 * 
 */

#ifndef __TIMER_CALCULATOR_H__
#define __TIMER_CALCULATOR_H__

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/**
 * calculates the capacitance of the given code
 * @param[in] code
 */
int capacitor(int code);

/**
 * @calculates resistance from codes 
 * @param[in] band
 * @param[in] code1
 * @param[in] code2
 * @param[in] code3
 */
int resistor(int band,char code1,char code2,char code3);

/**
 * Calculates the time pulse width
 * @param[in] band
 * @param[in] code1
 * @param[in] code2
 * @param[in] code3
 * @param[in] code
 */
double pulse(int band,char code1,char code2,char code3,int code);
#endif  /* #define __TIMER_CALCULATOR_H__ */