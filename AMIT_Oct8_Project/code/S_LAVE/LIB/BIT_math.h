/*
 * BIT_math.h
 *
 *  Created on: Jun 10, 2021
 *      Author: zaki
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_


#define SET_BIT(REG,BIT_NO)  		 (REG|=(1<<BIT_NO))
#define CLEAR_BIT(REG,BIT_NO) 		 (REG&=~(1<<BIT_NO))
#define TOGGLE_BIT(REG,BIT_NO) 		 (REG^=(1<<BIT_NO))
#define CHECK_BIT(REG,BIT_NO)		 ((REG >> BIT_NO)&0x01)

#endif /* LIB_BIT_MATH_H_ */
