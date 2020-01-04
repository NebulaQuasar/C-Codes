/*
 * Stack.h
 *
 *  Created on: 04-Jan-2020
 *      Author: Shivam Saxena
 */

//!-  Last In First Out (LIFO) Policy
//!-  Operations:
//!-  1-Push 2-Pop 3-Display 4-Length 5-Peep
//!-  Implementation:
//!-  1-Array Based 2-Linked List Based

#include <stdio.h>
#include <stdint.h>

#ifndef __STACK_H_
#define __STACK_H_

//!-  Defining Unsigned Character as "Bool"
typedef unsigned char  Bool;

#define TRUE  1
#define FALSE 0
#define CLEAR 0

#define STACK_EMPTY (-1)
#define STACK_TOP   (-1)

//!-  User Configurable Maximum Required Size
//!-  Only Value that should be modified by user
#define MAX_STACK_SIZE (10)

/****************************************************************************
!-  GLOBAL DEFINITIONS
*****************************************************************************/

Bool Stack_Init();
Bool Stack_Push(
        int const Value);
int Stack_Pop();
int Stack_Peep();
void Stack_Display();

#endif /* __STACK_H_ */
