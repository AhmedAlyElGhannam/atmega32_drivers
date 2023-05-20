#include "../Library/STD_TYPES.h"
#include "../Library/BITMASK.h"
#include "../Library/DIO_CONFIG.h"
#include "../Library/DIO_INTERFACE.h"
#include "../Library/DIO_PRIVATE.h"
#include "../Library/DIO_REGISTERS.h"




/*==============================================================================================================================================
 * Direction Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void DIO_void_SetPinDirection (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_direction);
 * Description : Sets pin direction for one of the ports
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 *               copy_uint8_direction --> Specifies data direction    (input / output)
 * return      : void
 */
 
void DIO_void_SetPinDirection (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_direction)
{
	if (copy_uint8_pin <= DIO_UINT8_PIN7)
	{
		if (copy_uint8_direction == DIO_UINT8_PIN_INPUT)
		{
			switch (copy_uint8_port)
			{
				case DIO_UINT8_PORTA: CLR_BIT(DDRA, copy_uint8_pin); break;
				case DIO_UINT8_PORTB: CLR_BIT(DDRB, copy_uint8_pin); break;
				case DIO_UINT8_PORTC: CLR_BIT(DDRC, copy_uint8_pin); break;
				case DIO_UINT8_PORTD: CLR_BIT(DDRD, copy_uint8_pin); break;
			}
		}
		else if (copy_uint8_direction == DIO_UINT8_PIN_OUTPUT)
		{
			switch (copy_uint8_port)
			{
				case DIO_UINT8_PORTA: SET_BIT(DDRA, copy_uint8_pin); break;
				case DIO_UINT8_PORTB: SET_BIT(DDRB, copy_uint8_pin); break;
				case DIO_UINT8_PORTC: SET_BIT(DDRC, copy_uint8_pin); break;
				case DIO_UINT8_PORTD: SET_BIT(DDRD, copy_uint8_pin); break;
			}
		}
	}
} 


/*
 * Prototype   : void DIO_void_SetPortDirection (uint8 copy_uint8_port, uint8 copy_uint8_direction);
 * Description : Sets direction for all pins in a specified port
 * Arguments   : copy_uint8_port          --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_direction     --> Specifies data value        (input / output)
 * return      : void
 */
 
void DIO_void_SetPortDirection (uint8 copy_uint8_port, uint8 copy_uint8_direction)
{
	switch (copy_uint8_port)
	{
		case DIO_UINT8_PORTA: DDRA = copy_uint8_direction; break;
		case DIO_UINT8_PORTB: DDRB = copy_uint8_direction; break;
		case DIO_UINT8_PORTC: DDRC = copy_uint8_direction; break;
		case DIO_UINT8_PORTD: DDRD = copy_uint8_direction; break;
	}

} 


/*==============================================================================================================================================
 * Setter/Write Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void DIO_void_SetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value);
 * Description : Sets pin value for one of the ports
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 *               copy_uint8_value     --> Specifies data value        (  1    /   0  )
 * return      : void
 */
 
void DIO_void_SetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value)
{
	if (copy_uint8_pin <= DIO_UINT8_PIN7)
	{
		if(copy_uint8_value == DIO_UINT8_LOW)
		{
			switch (copy_uint8_port)
			{
				case DIO_UINT8_PORTA: CLR_BIT(PORTA, copy_uint8_pin); break;
				case DIO_UINT8_PORTB: CLR_BIT(PORTB, copy_uint8_pin); break;
				case DIO_UINT8_PORTC: CLR_BIT(PORTC, copy_uint8_pin); break;
				case DIO_UINT8_PORTD: CLR_BIT(PORTD, copy_uint8_pin); break;
			}
		}
		else if (copy_uint8_value == DIO_UINT8_HIGH)
		{
			switch (copy_uint8_port)
			{
				case DIO_UINT8_PORTA: SET_BIT(PORTA, copy_uint8_pin); break;
				case DIO_UINT8_PORTB: SET_BIT(PORTB, copy_uint8_pin); break;
				case DIO_UINT8_PORTC: SET_BIT(PORTC, copy_uint8_pin); break;
				case DIO_UINT8_PORTD: SET_BIT(PORTD, copy_uint8_pin); break;
			}
		}
	}
}


/*
 * Prototype   : void DIO_void_SetPortValue (uint8 copy_uint8_port, uint8 copy_uint8_value);
 * Description : Sets value for all pins in a specified port
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_value     --> Specifies data value        (  1    /   0  )
 * return      : void
 */
 
void DIO_void_SetPortValue (uint8 copy_uint8_port,uint8 copy_uint8_value)
{
	switch (copy_uint8_port)
	{
		case DIO_UINT8_PORTA: PORTA = copy_uint8_value; break;
		case DIO_UINT8_PORTB: PORTB = copy_uint8_value; break;
		case DIO_UINT8_PORTC: PORTC = copy_uint8_value; break;
		case DIO_UINT8_PORTD: PORTD = copy_uint8_value; break;
	}
}


/*==============================================================================================================================================
 * Getter/Read Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : uint8 DIO_uint8_GetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin);
 * Description : Reads the logic value on a specified pin in a specified port
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : uint8
 */
 
uint8 DIO_uint8_GetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin)
{
	uint8 local_uint8_value;
	switch (copy_uint8_port)
	{
		case DIO_UINT8_PORTA: local_uint8_value = GET_BIT(PINA, copy_uint8_pin); break;
		case DIO_UINT8_PORTB: local_uint8_value = GET_BIT(PINB, copy_uint8_pin); break;
		case DIO_UINT8_PORTC: local_uint8_value = GET_BIT(PINC, copy_uint8_pin); break;
		case DIO_UINT8_PORTD: local_uint8_value = GET_BIT(PIND, copy_uint8_pin); break;
	}
	return local_uint8_value;
} 


/*
 * Prototype   : uint8 DIO_uint8_GetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin);
 * Description : Reads the logic value on a specified pin in a specified port
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : uint8
 */
 
uint8 DIO_uint8_GetPortValue (uint8 copy_uint8_port)
{
    switch (copy_uint8_port)
	{
		case DIO_UINT8_PORTA: return PINA; break;
		case DIO_UINT8_PORTB: return PINB; break;
		case DIO_UINT8_PORTC: return PINC; break;
		case DIO_UINT8_PORTD: return PIND; break;
	}
} 


/*
 *==============================================================================================================================================
 * General-purpose Shenanigans
 *==============================================================================================================================================
 */

/*
 * Prototype   : void DIO_void_ConfigurePinPullupResistance (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_pin_pull_up_status);
 * Description : Enables pull-up resistor for a specified pin in a specified port
				 Pull-up resistor is activated #IF DDRx = 0 (input) && PORTx = 1
				 Pull-up resistor is disabled #IF DDRx = 1 (output) || PORTx = 0
				 ## SFIOR register bit no.2 = 1? (case 1: == 1) All pull-ups are disabled regardless of DDRx and PORTx values : (case 2: == 0) All pull-ups can be configured using DDRx and PORTx
 * Arguments   : copy_uint8_port      		 --> Specifies the port         					 			(  A, B, C, D  )
 *               copy_uint8_pin      		 --> Specifies the pin          					 			(  0   -->  7  )
				 copy_pin_pull_up_status	 --> Enables or disables Pull-up resistor		( DIO_UINT8_PIN_PULLUP_ENABLED, DIO_UINT8_PIN_PULLUP_DISABLED )
 * return      : void
 */
 
void DIO_void_ConfigurePinPullupResistance (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_pin_pull_up_status)
{
	switch (copy_pin_pull_up_status)
	{
		case DIO_UINT8_PIN_PULLUP_ENABLED:
			DIO_void_SetPinDirection(copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_INPUT);
			DIO_void_SetPinValue (copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_PULLUP_ENABLED);
			break;
		case DIO_UINT8_PIN_PULLUP_DISABLED:
			DIO_void_SetPinDirection(copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_OUTPUT);
			DIO_void_SetPinValue (copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_PULLUP_DISABLED);
			break;
	}
	
} 


/*
 * Prototype   : void DIO_void_ConfigurePortPullupResistance (uint8 copy_uint8_port, uint8 copy_port_pull_up_status);
 * Description : Enables pull-up resistor for the whole port
				 Pull-up resistor is activated #IF DDRx = 0x00 (input) && PORTx = 0xFF
				 Pull-up resistor is disabled #IF DDRx = 0xFF (output) || PORTx = 0x00
				 ## SFIOR register bit no.2 = 1? (case 1: == 1) All pull-ups are disabled regardless of DDRx and PORTx values : (case 2: == 0) All pull-ups can be configured using DDRx and PORTx
 * Arguments   : copy_uint8_port      		 --> Specifies the port         					 			(  A, B, C, D  )
				 copy_pin_pull_up_status	 --> Enables or disables Pull-up resistor	( DIO_UINT8_PORT_PULLUP_ENABLED, DIO_UINT8_PORT_PULLUP_DISABLED )
 * return      : void
 */
 
void DIO_void_ConfigurePortPullupResistance (uint8 copy_uint8_port, uint8 copy_port_pull_up_status)
{
	switch (copy_port_pull_up_status)
	{
		case DIO_UINT8_PORT_PULLUP_ENABLED:
			DIO_void_SetPortDirection(copy_uint8_port, DIO_UINT8_PORT_INPUT);
			DIO_void_SetPortValue(copy_uint8_port, DIO_UINT8_PORT_PULLUP_ENABLED);
			break;
		case DIO_UINT8_PORT_PULLUP_DISABLED:
			DIO_void_SetPortDirection(copy_uint8_port, DIO_UINT8_PORT_OUTPUT);
			DIO_void_SetPortValue(copy_uint8_port, DIO_UINT8_PORT_PULLUP_DISABLED);
			break;
	}

} /* end of DIO_void_EnablePullupResistance() */

/*
 * Prototype   : void DIO_void_EnablePortPullupResistance (uint8 copy_uint8_port);
 * Description : Disables pull-up resistor for all ports
				 SFIOR bit no. 2 disables all pull-ups if it is set to 1 despite the values of DDRx and PORTx
 * Arguments   : void
 * return      : void
 */
 
 void DIO_void_DisableAllPullUpResistance(void)
 {
	 SET_BIT(SFIOR, 2);
 }
