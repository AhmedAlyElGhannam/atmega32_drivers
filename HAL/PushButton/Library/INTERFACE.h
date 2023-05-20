#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

void PUSHBUTTON_void_InitOneButton(uint8 copy_uint8_port, uint8 copy_uint8_pin);
void PUSHBUTTON_void_InitArrayOfButtons(uint8 copy_uint8_port);

uint8 PUSHBUTTON_uint8_ReadOneButton(uint8 copy_uint8_port, uint8 copy_uint8_pin);
uint8 PUSHBUTTON_uint8_ReadArrayOfButtons(uint8 copy_uint8_port);

#endif // INTERFACE_H_INCLUDED
