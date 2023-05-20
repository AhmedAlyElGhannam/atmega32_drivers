#ifndef DIO_REGISTERS_H_INCLUDED
#define DIO_REGISTERS_H_INCLUDED


/* Direction Registers
 * 1 --> output
 * 0 --> input
 */
 
#define DDRA (*(volatile uint8*)0x3A)
#define DDRB (*(volatile uint8*)0x37)
#define DDRC (*(volatile uint8*)0x34)
#define DDRD (*(volatile uint8*)0x31)


/* Data Registers
 * 1 --> HIGH
 * 0 --> LOW
 */
 
#define PORTA (*(volatile uint8*)0x3B)
#define PORTB (*(volatile uint8*)0x38)
#define PORTC (*(volatile uint8*)0x35)
#define PORTD (*(volatile uint8*)0x32)


/* Pin Address Register
 * Read-only --> Gives the logic on a port's pin
 * 1 --> HIGH
 * 0 --> LOW
 */
 
#define PINA (*(volatile uint8*)0x39)
#define PINB (*(volatile uint8*)0x36)
#define PINC (*(volatile uint8*)0x33)
#define PIND (*(volatile uint8*)0x30)

/*
 * General-purpose Registers
 * SFIOR bit no. 2 is used to configure pull-up resistors 
 * 1 --> All pull-ups are disabled regardless of DDRx and PORTx values
 * 0 --> All pull-ups can be configured using DDRx and PORTx
 */
 
#define SFIOR (*(volatile uint8*)0x50)


#endif // DIO_REGISTERS_H_INCLUDED
