/*
 * STD_types.h
 *
 *  Created on: Jun 10, 2021
 *      Author: zaki
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_

typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef unsigned long  int u32;

typedef signed short int s16;
typedef signed long  int s32;

typedef float  f32;
typedef double f64;

typedef enum
{
	FALSE,
	TRUE
}boolean;

#define NULL_Ptr ((void*)(0x00))

#endif /* LIB_STD_TYPES_H_ */
