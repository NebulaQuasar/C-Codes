/*
 *!-  Code To: Create a file and insert an array of Random data.
 *!-  Open that file again and read the data again into an array.
 *!-  Use Merge Sort to sort that array.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int  i = 0;
    int  r = 0;
    int  j = 0;
    int  key = 0;
    int  arr1[10] = {0};
    int  arr2[10] = {0};
    int  check_print = 0;

    srand(time(NULL));

    for (i=0; i<10; i++){
        r = rand();
        arr1[i] = r;
        printf("The value stored at arr1[%d] is %d \n", i, r);
    }

    printf("\n ***************************************************************************** \n \n");

    FILE *fptr = NULL;

    fptr = fopen("Test_Data.txt","a+");

    if (fptr == NULL){
        printf("Error in Opening/Creating \n");
        exit(1);
    }

/******************** TO WRITE AS BINARY (.bin) FILE ****************************/
/*
    for (i=0; i<10; i++){
        fwrite(ptr, sizeof(arr1[i]), i, fptr);
    }
*/
/*******************************************************************************/

    for (i=0; i<=10; i++){
        check_print = fprintf(fptr, "%d", arr1[i]);

        if (check_print < 0) {
            printf("Error while writing in File \n");
        }

        check_print = fprintf(fptr, " ");

        if (check_print < 0) {
            printf("Error while writing in File \n");
        }

        if (i == 10) {
            check_print = fprintf(fptr, "\n");
            if (check_print < 0) {
                printf("Error while writing in File \n");
            }
        }
    }

    fclose(fptr);

    fptr = fopen("Test_Data.txt","r");
    if (fptr == NULL) {
        printf("Error in Opening/Creating \n");
        exit(1);
    }

    for (i=0; i<10; i++) {
        fscanf(fptr, "%d", &arr2[i]);
        printf("The value stored in arr2[%d] is %d \n", i, arr2[i]);
    }

    fclose(fptr);

    for (j=1; j<10; j++) {
        key = arr2[j];
        i = j-1;

        while ((i>0) && (arr2[i]>key)) {
            arr2[i+1] = arr2[i];
            i = i-1;
            arr2[i+1] = key;
        }
    }

    printf("\n \n");
    for (i=0; i<10; i++) {
        printf("The value stored in arr2[%d] is %d \n", i, arr2[i]);
    }

    return 0;
}
