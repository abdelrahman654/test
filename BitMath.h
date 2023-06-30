/*
 * BitMath.h
 *
 * Created: 13/05/2022 07:48:33 م
 *  Author: dell
 */ 

//version 2 

#ifndef BITMATH_H_
#define BITMATH_H_

#define SetBit(Reg,Bit)      Reg |=  (1 << Bit)
#define ClrBit(Reg,Bit)      Reg &= ~(1 << Bit)
#define TogBit(Reg,Bit)      Reg ^=  (1 << Bit)
#define GetBit(Reg,Bit)      1 & (Reg >> Bit)

#endif /* BITMATH_H_ */