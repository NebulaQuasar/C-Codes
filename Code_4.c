
/*
 *!-  Code for taking the String as Input and Comparing it.
 *!-
 */

#include <stdio.h>
#include <string.h>

int main() {

    const char R_pass[20]="Success*01";
    int L1 = 0;
    int L2 = 0;
    int testResult = 0;
 
    char tempstr[20];
    printf("Please enter a string: \n");
    scanf("%s", tempstr);

    L1 = strlen(R_pass);
    L2 = strlen(tempstr);

    if (L1 != L2) {
        printf("Entered String is Incorrect. \n");
        return 0;
    }
    else {
        testResult = strcmp(R_pass, tempstr);
        if (testResult == 0)
            printf("Entered String is Correct. \n");
        else
            printf("Entered String is Incorrect. \n");
    }
    return 0;
}
