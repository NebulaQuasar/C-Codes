/*
 * Test_Example.c
 *
 *  Created on: 12-Jan-2020
 *      Author: Shivam Saxena
 */

#include "Linked_List.h"

int main() {

    int i = 0;
    int val;
    for (i=20;i<24; i=i+2) {
        Insert_Beginning(i);
    }

    Display_List();

    val = Delete_Beginning();
    printf("Pop Out value is %d \n", val);
    val = Delete_Beginning();
    printf("Pop Out value is %d \n", val);
    val = Delete_Beginning();
    printf("Pop Out value is %d \n", val);
    Display_List();
    return 0;
}
