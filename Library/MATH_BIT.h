#ifndef BIT_MATH_H
#define BIT_MATH_H


#define SET_BIT(VAR, BIT_NO) (VAR |= (1 << BIT_NO))
#define CLR_BIT(VAR, BIT_NO) (VAR &= ~(1 << BIT_NO))
#define TOG_BIT(VAR, BIT_NO) (VAR ^= (1 << BIT_NO))
#define GET_BIT(VAR, BIT_NO) ((VAR >> BIT_NO) & (0x01))
#define HIGH_NIBBLE(VAR_H,VAR) (VAR_H = (VAR & 0xF0)
#define LOW_NIBBLE(VAR_L,VAR) (VAR_L = (VAR & 0x0F))





#endif
