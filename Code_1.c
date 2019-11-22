/*
 *!-  CODE: Create a file and insert an array of Random data.
 *!-        Open that file again and read the data again into an array.
 *!-        Use Merge Sort to sort that array.
 */

#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>

int main(){

     //!-  Variables Initialization

    int i=0;
    int r=0;
    int j=0;
    int key=0;
    int arr1[10] = {0};
    int arr2[10] = {0};
    int check_print=0;
    FILE *fptr = NULL;

    //!-  Running Random Number Generator Logic

    srand(time(NULL));

    for (i=0; i<10; i++) {
        r = rand();
        //! - Fill array with Random Numbers.
        arr1[i] = r;
        printf("The value stored at arr1[%d] is %d \n", i, r);
    }

    printf("\n");
    printf("\n");

    //!-  Logic to Open a File

    //! - "a+" for opening file in append mode
    fptr = fopen("Test_Data.txt","a+");

    if (fptr == NULL) {
        printf("Error in Opening/Creating \n");
        exit(1);
    }

    //!-  Logic to Write Array in File & Close File

    for (i=0; i<10; i++) {
        check_print = fprintf(fptr, "%d", arr1[i]);
        if (check_print < 0) {
            printf("Error while writing in File \n");
        }
        check_print = fprintf(fptr, " ");
        if (check_print < 0) {
            printf("Error while writing in File \n");
        }
    }

    check_print = fprintf(fptr, "\n");
    if (check_print < 0) {
        printf("Error while writing in File \n");
    }

    fclose(fptr);

    //!-  Logic to Open a FILE in Read Only Mode

    //! - "r" for opening file in Read Only mode
    fptr = fopen("Test_Data.txt","r+");
    if (fptr == NULL) {
        printf("Error in Opening/Creating \n");
        exit(1);
    }

    fseek(fptr,-1,SEEK_END);
	
    for (i=0; i<10; i++) {
        fscanf(fptr, "%d", &arr2[i]);
    }

    printf("\n");

    for (i=0; i<10; i++) {
        printf("The value stored in arr2[%d] is %d \n", i, arr2[i]);
    }

    return 0;
}
