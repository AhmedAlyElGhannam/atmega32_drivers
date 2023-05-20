#include "../../LED/Library/LED.h"
#include "../Library/PRIVATE.h"
#include "../Library/CONFIG.h"
#include "../Library/INTERFACE.h"


/*==============================================================================================================================================
 * Initialization Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void SEVENSEGMENT_void_Init(uint8 copy_uint8_port);
 * Description : Sets port up for 7-segment
 * Arguments   : copy_uint8_port      --> Specifies the port          (  A, B, C, D  )
 * return      : void
 */

void SEVENSEGMENT_void_Init(uint8 copy_uint8_port)
{
    LED_void_ArrayOfLEDInit(copy_uint8_port);
}


/*==============================================================================================================================================
 * Initialization Shenanigans
 *==============================================================================================================================================*/

/*
 * Prototype   : void SEVENSEGMENT_void_Init(uint8 copy_uint8_port);
 * Description : Sets port up for 7-segment
 * Arguments   : copy_uint8_port      --> Specifies the port                                (  A, B, C, D  )
 *               copy_uint8_number    --> Specifies the number to be displayed      (in decimal - hex is already stored)
 * return      : void
 */

void SEVENSEGMENT_void_DisplayNumber(uint8 copy_uint8_port, uint8 copy_uint8_number)
{
    if ((copy_uint8_number < 10) && (copy_uint8_number >= 0))
    {
        LED_void_ArrayOfLEDOnOff(copy_uint8_port, SEVENSEGMENT_uint8SevenSegmentArray[copy_uint8_number]);
    }
}
