/*
 *!-  INSERTION-SORT Algorithm
 */

#include <stdio.h>

int main(){

    int array[10] = {6,7,5,8,4,9,3,1,0,2};
    int i, key = 0, j;

    //!-  From 2 card to Last card.
    for(i=1; i<10; i++) {
        //!-  Picking Up the new card to be Placed.
        key = array[i];
        //!-  For the card already in hands.
        j=i-1;
        //!-  Check if New card is less than card in Hands. 
        while((j>=0) && (array[j]>key)) {
            //!-  If New card is less than card in Hands
            //!-  Exchange the cards.
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }

    //!-  Print the Sorted Array.
    for (i=0; i<10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}
