#include "../Library/STD_TYPES.h"
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#define  TRUE					1
#define  FALSE					0

#define DIO_UINT8_PIN_OUTPUT 	1
#define DIO_UINT8_PIN_INPUT 	0

#define DIO_UINT8_PIN0          0
#define DIO_UINT8_PIN1          1
#define DIO_UINT8_PIN2          2
#define DIO_UINT8_PIN3          3
#define DIO_UINT8_PIN4          4
#define DIO_UINT8_PIN5          5
#define DIO_UINT8_PIN6          6
#define DIO_UINT8_PIN7			7


#define DIO_UINT8_PORTA         0
#define DIO_UINT8_PORTB         1
#define DIO_UINT8_PORTC         2
#define DIO_UINT8_PORTD         3


#define DIO_UINT8_HIGH			1
#define DIO_UINT8_LOW  			0


#define DIO_UINT8_PORTA_OUTPUT  0xFF
#define DIO_UINT8_PORTB_OUTPUT  0xFF
#define DIO_UINT8_PORTC_OUTPUT  0xFF
#define DIO_UINT8_PORTD_OUTPUT  0xFF


#define DIO_UINT8_PORTA_INPUT  0
#define DIO_UINT8_PORTB_INPUT  0
#define DIO_UINT8_PORTC_INPUT  0
#define DIO_UINT8_PORTD_INPUT  0


#define DIO_UINT8_PULLUP_ENABLED 0
#define DIO_UINT8_PULLUP_DISABLED 1


void DIO_void_SetPinDirection(uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_direction);

void DIO_void_SetPinValue(uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value);

void DIO_void_SetPortDirection(uint8 copy_uint8_port, uint8 copy_uint8_direction);

void DIO_void_GetPortValue(uint8 copy_uint8_port, uint8 copy_uint8_value);

uint8 DIO_void_GetPinValue(uint8 copy_uint8_port, uint8 copy_uint8_pin);

void DIO_void_EnablePullUpResistance(uint8 copy_uint8_port, uint8 copy_uint8_pin);



#endif
