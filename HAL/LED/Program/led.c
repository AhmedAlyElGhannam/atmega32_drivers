#include "../../../MCAL/DIO/Library/DIO.h"
#include "../Library/CONFIG.h"
#include "../Library/INTERFACE.h"



/*==============================================================================================================================================
 * Initialization Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void LED_void_SingleLEDInit(uint8 copy_uint8_port, uint8 copy_uint8_pin);
 * Description : Sets pin direction LED is connected to to output and sets the pin to 0
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : void
 */

void LED_void_SingleLEDInit(uint8 copy_uint8_port, uint8 copy_uint8_pin)
{
    DIO_void_SetPinDirection(copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_OUTPUT);
    DIO_void_SetPinValue(copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_LOW);
}


/*
 * Prototype   : void LED_void_ArrayOfLEDInit(uint8 copy_uint8_port);
 * Description : Sets port direction 8 LEDs are connected to to output and sets the port to 0
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 * return      : void
 */

void LED_void_ArrayOfLEDInit(uint8 copy_uint8_port)
{
    DIO_void_SetPortDirection(copy_uint8_port, DIO_UINT8_PORT_OUTPUT);
    DIO_void_SetPortValue(copy_uint8_port, DIO_UINT8_PORT_LOW);
}


/*==============================================================================================================================================
 * Toggle Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void LED_void_SingleLEDToggle(uint8 copy_uint8_port, uint8 copy_uint8_pin);
 * Description : Toggles LED on and off
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : void
 */

void LED_void_SingleLEDToggle(uint8 copy_uint8_port, uint8 copy_uint8_pin)
{
    switch (copy_uint8_port)
    {
        case DIO_UINT8_PORTA: TOGGLE_BIT(PORTA, copy_uint8_pin); break;
        case DIO_UINT8_PORTB: TOGGLE_BIT(PORTB, copy_uint8_pin); break;
        case DIO_UINT8_PORTC: TOGGLE_BIT(PORTC, copy_uint8_pin); break;
        case DIO_UINT8_PORTD: TOGGLE_BIT(PORTD, copy_uint8_pin); break;
    }
}


/*
 * Prototype   : void LED_void_ArrayOfLEDToggle(uint8 copy_uint8_port);
 * Description : Toggles array of 8 LEDs on and off
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 * return      : void
 */
void LED_void_ArrayOfLEDToggle(uint8 copy_uint8_port)
{
    switch (copy_uint8_port)
    {
        case DIO_UINT8_PORTA: PORTA ^= DIO_UINT8_PORT_HIGH; break;
        case DIO_UINT8_PORTB: PORTB ^= DIO_UINT8_PORT_HIGH; break;
        case DIO_UINT8_PORTC: PORTC ^= DIO_UINT8_PORT_HIGH; break;
        case DIO_UINT8_PORTD: PORTD ^= DIO_UINT8_PORT_HIGH; break;
    }
}


/*==============================================================================================================================================
 * Turn On/Off Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void LED_void_SingleLEDOnOff(uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value);
 * Description : Toggles LED on and off
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : void
 */

void LED_void_SingleLEDOnOff(uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value)
{
    DIO_void_SetPinValue(copy_uint8_port, copy_uint8_pin, copy_uint8_value);
}


/*
 * Prototype   : void LED_void_ArrayOfLEDOnOff(uint8 copy_uint8_port, uint8 copy_uint8_value);
 * Description : Toggles array of 8 LEDs on and off
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 * return      : void
 */
void LED_void_ArrayOfLEDOnOff(uint8 copy_uint8_port, uint8 copy_uint8_value)
{
    DIO_void_SetPortValue(copy_uint8_port, copy_uint8_value);
}


