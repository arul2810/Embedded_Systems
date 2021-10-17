/*

Author : Arul Prakash Samathuvamani - University of Leeds

Description: Blink LED when Button is pressed. During 1st press, blink one time, 2nd press blink two times

Function: main.c

Dependencies : BoardSupport - LED and Buttons

Compiler : ARM C - Keil uVision 

 
*/

// Declaration of libraries

#include <stdio.h>  // input output standard

// Board support libraries declaration 

// Include Device Header 

#include "stm32f10x.h"
#include "Board_LED.h"                  // ::Board Support:LED
#include "Board_Buttons.h"              // ::Board Support:Buttons

// Function Declaration

int main ( void ) {
	
	uint32_t count= 0;
	
	printf("Hello World \n");
	
	LED_Initialize();
	
	uint32_t led_count;
	
	led_count = LED_GetCount();
	
	printf("LED Count = %d \n ",led_count);
	
	for (;;){
	
		while ( Buttons_GetState() ) { // Enter Loop if button is pressed
			
			count++; // Increment Count 
			
			LED_On ( 0 ); // Turn on LED for count number of times
			
		}

	}
	
	return 0;
	
}
