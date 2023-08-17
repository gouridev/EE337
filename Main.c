#include <at89c5131.h>
#include "lcd.h"				//Header file with LCD interfacing functions
#include "MorseCode.h"	//Header file for Morse Code 

sbit LED=P1^7;
sbit A=P1^0;
sbit BB=P1^1;
sbit C=P1^2;
sbit D=P1^3;
/*
Port P0.7 is used for the audio signal output
*/	
//Main function

void main(void)
{
		
	//Call initialization functions
	lcd_init();
	
	
	// Read input nibble here
	if(A==1) 
	{morsea();
		lcd_write_string("A");
	}
	else if(BB==1)
	{morseb();
	lcd_write_string("B");
	}
	else if(C==1)
		{morsec();
		lcd_write_string("C");
		}
	else if(D==1)
		{morsed();
		lcd_write_string("D");
		}
	else	
		{morsee();
		lcd_write_string("E");
		}
			
	
	
	
	// Insert Priority Logic
	// Inside each condition, call the functions from MorseCode.h. Fill functions in MorseCode.h
	// Write to LCD using function lcd_write_string() in side the condition as well
	
	
	// 
	
	
}
