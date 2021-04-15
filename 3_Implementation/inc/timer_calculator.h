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
 * @param[in] code4
 */
int resistor4(char code1,char code2,char code3,char code4);

/**
 * @calculates resistance from codes 
 * @param[in] band
 * @param[in] code1
 * @param[in] code2
 * @param[in] code3
 * @param[in] code4
 * @param[in] code5
 */
int resistor5(char code1,char code2,char code3,char code4,char code5);

/**
 * Calculates the time pulse width
 * @param[in] band
 * @param[in] code1
 * @param[in] code2
 * @param[in] code3
 * @param[in] code
 */
double pulse(char code1,char code2,char code3,char code4,int code);
#endif  /* #define __TIMER_CALCULATOR_H__ */