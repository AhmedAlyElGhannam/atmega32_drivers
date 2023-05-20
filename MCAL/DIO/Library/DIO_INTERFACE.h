#ifndef DIO_INTERFACE_H_INCLUDED
#define DIO_INTERFACE_H_INCLUDED

void DIO_void_SetPinDirection (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_direction);
void DIO_void_SetPortDirection (uint8 copy_uint8_port, uint8 copy_uint8_direction);

void DIO_void_SetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value);
void DIO_void_SetPortValue (uint8 copy_uint8_port,uint8 copy_uint8_value);

uint8 DIO_uint8_GetPinValue (uint8 copy_uint8_port, uint8 copy_uint8_pin);
uint8 DIO_uint8_GetPortValue (uint8 copy_uint8_port);


void DIO_void_ConfigurePinPullupResistance (uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_pin_pull_up_status);
void DIO_void_ConfigurePortPullupResistance (uint8 copy_uint8_port, uint8 copy_port_pull_up_status);
void DIO_void_DisableAllPullUpResistance(void);

#endif // DIO_INTERFACE_H_INCLUDED
