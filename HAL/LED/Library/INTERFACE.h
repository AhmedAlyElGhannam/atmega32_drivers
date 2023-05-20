#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

void LED_void_SingleLEDInit(uint8 copy_uint8_port, uint8 copy_uint8_pin);
void LED_void_ArrayOfLEDInit(uint8 copy_uint8_port);

void LED_void_SingleLEDToggle(uint8 copy_uint8_port, uint8 copy_uint8_pin);
void LED_void_ArrayOfLEDToggle(uint8 copy_uint8_port);

void LED_void_SingleLEDOnOff(uint8 copy_uint8_port, uint8 copy_uint8_pin, uint8 copy_uint8_value);
void LED_void_ArrayOfLEDOnOff(uint8 copy_uint8_port, uint8 copy_uint8_value);

#endif // INTERFACE_H_INCLUDED
