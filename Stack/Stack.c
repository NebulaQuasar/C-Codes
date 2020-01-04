/*
 * Stack.c
 *
 *  Created on: 04-Jan-2020
 *      Author: Shivam Saxena
 */

//!-  Headers
#include "Stack.h"

/****************************************************************************
!-  LOCAL VARIABLES
*****************************************************************************/

static int Stack_Data[MAX_STACK_SIZE] = {0};

static int Top   = STACK_TOP;

/****************************************************************************
!-  LOCAL FUNCTIONS
*****************************************************************************/

//!-  Stack_Clear() to clear entire stack to Zero
Bool Stack_Clear() {

    int Index;
    Bool Check_OK = FALSE;
    if (MAX_STACK_SIZE > 0) {
        for (Index=0;Index < MAX_STACK_SIZE; Index++) {
            Stack_Data[Index] = CLEAR;
        }
        Check_OK = TRUE;
    }
    else {
        Check_OK = FALSE;
    }
    return Check_OK;
}

//!-  Stack_Is_Full() to check if the stack is Full
Bool Stack_Is_Full() {

    Bool Check_OK = FALSE;
    if (Top == (MAX_STACK_SIZE-1)) {
        Check_OK = TRUE;
    }
    else {
        Check_OK = FALSE;
    }
    return Check_OK;
}

//!-  Stack_Is_Empty() to check if the stack is Empty
Bool Stack_Is_Empty() {

    Bool Check_OK = FALSE;
    if (Top == STACK_EMPTY) {
        Check_OK = TRUE;
    }
    else {
        Check_OK = FALSE;
    }
    return Check_OK;
}

/****************************************************************************
!-  GLOBAL FUNCTIONS
*****************************************************************************/

 Bool Stack_Init() {

    Bool Check_OK = FALSE;
    Check_OK = Stack_Clear();
    return Check_OK;
}

//!-  Stack_Push() to Push Data on the stack
Bool Stack_Push(
        int const Value) {

    Bool Check_OK = FALSE;
    Check_OK =  Stack_Is_Full();
    if (Check_OK != TRUE) {
        Top = Top + 1;
        Stack_Data[Top] = Value;
        Check_OK = TRUE;
    }
    return Check_OK;
}

//!-  Stack_Pop() to Pop Data from the stack
int Stack_Pop() {

    int Value;
    Bool Check_OK = FALSE;
    Check_OK =  Stack_Is_Empty();
    if (Check_OK != TRUE) {
        Value = Stack_Data[Top];
        Top = Top - 1;
    }
    else {
        Value = STACK_EMPTY;
    }
    return Value;
}

//!-  Stack_Peep() to Peep Data from the stack
int Stack_Peep() {

    int Value;
    Bool Check_OK = FALSE;
    Check_OK =  Stack_Is_Empty();
    if (Check_OK != TRUE) {
        Value = Stack_Data[Top];
    }
    else {
        Value = STACK_EMPTY;
    }
    return Value;
}

//!-  Stack_Display() to display the entire stack
void Stack_Display() {

    int Index = 0;
    Bool Check_OK = FALSE;
    Check_OK =  Stack_Is_Empty();
    if (Check_OK != TRUE) {
        for (Index=Top;Index >= 0; Index--) {
            printf("Stack Data : %d \n", Stack_Data[Index]);
        }
    }
    else {
        printf("Stack is Empty \n");
    }
}
