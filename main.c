#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "KeyPad_Interface.h"
#include "ADC_Interface.h"
#include "Sensors_Interface.h"
#include "FireSystem_Interface.h"

#define  F_CPU   8000000
#include <util/delay.h>








int main(void)
{
	DIO_Init();
	LCD_Init();
	KEYPAD_Init();
	ADC_Init(VREF_AVCC,ADC_SCALER_64);
	
	while (1)
	{
			Fire_system_Runnable();
		
	}
}

