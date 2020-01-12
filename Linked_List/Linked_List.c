/*
 * Linked_List.c
 *
 *  Created on: 12-Jan-2020
 *      Author: Shivam Saxena
 */
#include "Linked_List.h"

static Node *StartNode = NULL;  //!-  Self Referential Structure

/*
 *!-  Insert_Beginning() is used to insert value into the Linked List.
 *!-  No matter whether the List is Empty or Non-Empty.
 *!-  It is similar to PUSH data on stack.
 */
Bool Insert_Beginning(
        int Value) {

    Bool Check_OK = TRUE;
    Node *Temp;
    Temp = malloc(sizeof(Node));
    Temp->info = Value;
    Temp->next = StartNode;
    StartNode = Temp;
    return Check_OK;
}

/*
 *!-  Delete_Beginning() is used to Delete value from the Linked List.
 *!-  The Non-Empty List will return the last stored value.
 *!-  For Empty List "-1" is Returned.
 *!-  It is similar to POP Out data from stack.
 */
int Delete_Beginning() {

    Node *FirstNode;
    int value;
    if (StartNode == NULL) {
        value = EMPTY_LIST;
        return value;
    }
    else {
        FirstNode = StartNode;
        StartNode = FirstNode->next;
        value = FirstNode->info;
        free(FirstNode);
    }
    return value;
}

/*
 *!-  Display_List() is used to Display value stored in the Linked List.
 *!-  It is similar to ISPLAY data in stack.
 */
void Display_List() {
    Node *CurrentNode = StartNode;
    int n = 0;
    while (CurrentNode != NULL) {
        printf("NODE:%3.d --> %d \n", n, CurrentNode->info);
        CurrentNode = CurrentNode->next;
        n++;
    }
}
