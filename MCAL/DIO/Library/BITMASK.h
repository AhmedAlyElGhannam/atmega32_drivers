#ifndef BITMASK_H_INCLUDED
#define BITMASK_H_INCLUDED


#define GET_BIT(REG, BIT)       ((REG & (1 << BIT)) >> BIT)
#define SET_BIT(REG, BIT)       REG |= (1 << BIT)
#define CLR_BIT(REG, BIT)       REG &= (~(1 << BIT))
#define TOGGLE_BIT(REG, BIT)    REG ^= (1 << BIT)


#endif // BITMASK_H_INCLUDED
