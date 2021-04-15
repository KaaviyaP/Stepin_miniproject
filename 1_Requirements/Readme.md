# Requirements
## Introduction
555 Timer IC’s are the most commonly used ICs for timing and Pulse generation applications. They can adopt itself into various applications due to its different operating modes: Astable Mode, Monostable Mode and Bi-Stable Mode. Each mode has its own properties and applications since every mode provides a different type of wave forms.

This **555 timer monostable circuit calculator** can be used to get the output pulse width (delay time). In Monostable mode of 555 timer IC, when power is applied, the output remains low for the Delay time and then becomes high and remains high, or vice versa.To avoid all the hassle of data conversion and calculation you can use the 555 timer monostable calculator given above to calculate the value of time duration of the pulse.
 

## Research

![alt text](https://user-images.githubusercontent.com/80662569/114384494-68cede00-9bac-11eb-9fa0-83962f6f880c.PNG)

This is a simple circuit to make the 555 timer IC to work in Monostable mode. Whenever the push button connected to Trigger pin (pin 2) is pressed a trigger pulse is detected by the 555 IC and so it will trigger the output pulse on its output pin (pin 3) as shown in the waveform below.

![alt-text](https://user-images.githubusercontent.com/80662569/114384907-f27eab80-9bac-11eb-98dd-97f32e1b0723.PNG)

This output pulse will stay high based on its pulse width. This output pulse width sets the pre-defined time and as said earlier it can be set by selecting the correct values of Resistor (R) and Capacitor (C) using the below formulae.

###### Output Pulse Width (secs) = 1.1 x R x C
   
   **Features:**

This 555 timer monostable circuit calculator can be used to 
  *  Get the output pulse width (delay time). In Monostable mode of 555 timer IC, when power is applied, the output remains low for the Delay time and then becomes high and remains high, or vice versa.
  *  Along with that, the program also automatically computes the resistor value from the colour bands entered and capacitor value from the code entered by the user.

**Benefits:**

*	This combines 3 different calculators- A Resistor band Calculator, A Capacitance code calculator and a 555 Timer Pulse Width Calculator. All the three can be calculated at one place.
*	These is no confusion for Data conversion and calculation. Easy to use.
*	No need to look through the spec sheet and the hand calculator any time one needs to find the values for a one-shot monostable setup.

## Cost and Features
Time : 10 days
Scope: Future Technological advancement
Cost : Cost to be evaluated only during implementation 
## Defining Our System
Assumptions:
* Resistors are 4/5 band resistors
* Capacitors are ceramic capacitors

 ![alt-text](https://user-images.githubusercontent.com/80662569/114438857-ef53e180-9be5-11eb-81df-2b893c3fe548.png)

This calculator computes for the output pulse width of a 555 Timer monostable circuit by taking inputs of R and C as their respective codes.
The Monostable 555 Timer circuit triggers on a negative-going pulse applied to pin 2 and this trigger pulse must be much shorter than the output pulse width allowing time for the timing capacitor to charge and then discharge fully. Once triggered, the 555 Monostable will remain in this “HIGH” unstable output state until the time period set up by the R x C network has elapsed. The amount of time that the output voltage remains “HIGH” or at a logic “1” level, is given by the following time constant equation.

###### τ = 1.1RC

Where, t is in seconds, R is in Ω and C in Farads.

### Resistor Code Calculator
4 band color code resistor
* The 1st color band on the resistor indicates the 1st significant value or 1st digit of the resistors resistance and 
* The 2nd color band indicates 2nd significant value or 2nd digit of the resistors resistance. 
* The 3rd color band is the decimal multiplier and 
* The 4th color band indicates the resistors tolerance.

![alt-text](https://user-images.githubusercontent.com/80662569/114440855-45298900-9be8-11eb-8cae-826aef6af41c.jpg)![alt-text](https://user-images.githubusercontent.com/80662569/114438930-02ff4800-9be6-11eb-9d28-1572325e35a8.png)

5 band color code resistor
* The 1st color band indicates the 1st significant value or 1st digit of the resistors value.
* The 2nd color band indicates the 2nd significant value or 2nd digit of the resistor value.
* The 3rd color band indicates the 3rd significant value or 3rd digit of the resistors value.
* The 4th color band is the decimal multiplier.
* The 5th color band indicates the resistors tolerance.

![alt-text](https://user-images.githubusercontent.com/80662569/114440878-4c509700-9be8-11eb-9d06-c4ac2d470523.jpg)![alt-text](https://user-images.githubusercontent.com/80662569/114438957-098dbf80-9be6-11eb-8063-af326a642a8d.png)

### Capacitance Code Calculator
Ceramic capacitors encoding consists 1-3 digits.
If the capacitor code consist only 1 or 2 digits, it is simply their capacitance value in PicoFarads (pF).
For 3 digit’s capacitor code, the first two digits are the capacitance value in pF and the third digit is a multiplier factor of first two digits to calculate the final capacitance value of the capacitor.The 3rd digit ranges between 0-6. It can’t exceed more than 6.

## SWOT ANALYSIS
![alt-text](https://user-images.githubusercontent.com/80662569/114427923-3687a580-9bd9-11eb-8cb6-0ef7767aa458.png)

# 4W&#39;s and 1&#39;H

## Who:
Students(especially electronics and electrical background) to save time from tedious calculations.

## What:
Looking at the spec sheets for an electronic equipment every-time is tiresome. So, A Calculator to find the pulse width of a monostable configured 555 timer, alongside converting codes of resistors and capacitors into their values.

## When:
As technologies grow more complex everyday, it'll serve as a tool to make work easier.

## Where:
Applications for Monostable Circuits like Touch Switch, Servo Motor Testers,Missing pulse detection, Bounce-free switches,Frequency divider,Capacitance measurement, Pulse-width modulation (PWM).

## How:
Takes R and C codes as inputs, converts them into their respective values and determines the Output pulse width.

# Detail requirements
## High Level Requirements:

| ID    | Description             | Status (Implemented/Future)|
| ------|-------------------------|----------------------------|
| HR01  |Resistor code conversion |        Implemented         |
| HR02  |Capacitor code conversion|        Implemented         |
| HR03  |Pulse width calculator   |        Implemented         |



## Low level Requirements:

| ID    | Description                       | Status (Implemented/Future)|
| ------|-----------------------------------|----------------------------|
| LR01  |4 band resistor code values        |        Implemented         |
| LR02  |5 band resistor code values        |        Implemented         |
| LR03  |Tolerance of the resistors         |        Future              |
| LR04  |1 digit capacitor code conversion  |        Implemented         |
| LR05  |2 digit capacitor code conversion  |        Implemented         |
| LR06  |3 digit capacitor code conversion  |        Implemented         |
