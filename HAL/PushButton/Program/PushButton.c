#include "../../../MCAL/DIO/Library/DIO.h"
#include "../Library/CONFIG.h"
#include "../Library/INTERFACE.h"


/*==============================================================================================================================================
 * Initialization Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void PUSHBUTTON_void_InitOneButton(uint8 copy_uint8_port, uint8 copy_uint8_pin);
 * Description : Sets pin pull-up resistor and direction to input for 1 button
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : void
 */

void PUSHBUTTON_void_InitOneButton(uint8 copy_uint8_port, uint8 copy_uint8_pin)
{
    DIO_void_ConfigurePinPullupResistance(copy_uint8_port, copy_uint8_pin, DIO_UINT8_PIN_PULLUP_ENABLED);
}


/*
 * Prototype   : void PUSHBUTTON_void_InitArrayOfButtons(uint8 copy_uint8_port);
 * Description : Sets port pull-up resistor and direction to input for 8 buttons
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 * return      : void
 */

void PUSHBUTTON_void_InitArrayOfButtons(uint8 copy_uint8_port)
{
    DIO_void_ConfigurePortPullupResistance(copy_uint8_port, DIO_UINT8_PORT_PULLUP_ENABLED);
}


/*==============================================================================================================================================
 * Initialization Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : uint8 PUSHBUTTON_uint8_ReadOneButton(uint8 copy_uint8_port, uint8 copy_uint8_pin);
 * Description : Reads if button is on or off
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 *               copy_uint8_pin       --> Specifies the pin           (  0   -->  7  )
 * return      : uint8
 */

uint8 PUSHBUTTON_uint8_ReadOneButton(uint8 copy_uint8_port, uint8 copy_uint8_pin)
{
    return DIO_uint8_GetPinValue(copy_uint8_port, copy_uint8_pin);
}


/*
 * Prototype   : uint8 PUSHBUTTON_uint8_ReadArrayOfButtons(uint8 copy_uint8_port);
 * Description : Reads if array of buttons are on or off (all are either on or off. not some on and some off)
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 * return      : uint8
 */

uint8 PUSHBUTTON_uint8_ReadArrayOfButtons(uint8 copy_uint8_port)
{
    return DIO_uint8_GetPortValue(copy_uint8_port);
}







