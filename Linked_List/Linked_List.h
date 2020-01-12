/*
 * Linked_List.h
 *
 *  Created on: 12-Jan-2020
 *      Author: Shivam Saxena
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#ifndef __LINKED_LIST_H_
#define __LINKED_LIST_H_

//!-  Defining Unsigned Character as "Bool"
typedef unsigned char  Bool;

#define TRUE  1
#define FALSE 0
#define CLEAR 0
#define EMPTY_LIST  (-1)
#define NULL ((void *)0)

typedef struct {
    int info;           //!-  Data or Payload
    struct Node* next;  //!-  Link
} Node;

/****************************************************************************
!-  GLOBAL DEFINITIONS
*****************************************************************************/

Bool Insert_Beginning(
        int Value);

int Delete_Beginning(
        void);

void Display_List(
        void);

#endif /* __LINKED_LIST_H_ */
