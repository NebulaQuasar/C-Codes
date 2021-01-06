#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

// 03 Start ******************************************************************

// int *testhack()
// {
//     static int val = 5;
//     return &val;
// }

// 03 Stop *******************************************************************

// 04 Start ******************************************************************

// void func1() { printf("Test\n"); }
// void func2() { printf("Questions\n"); }

// int testhack( void (*hack)())
// {
//     hack();
// }

// 04 Stop *******************************************************************

// 05 Start ******************************************************************

    // char str[101];
    // int temp, i, j, n, flag;

// 05 Stop *******************************************************************

// 09 Start ******************************************************************

    // int fun(char *str1)
    // {
    //     char *str2 = str1;
    //     while (*++str1);
    //         return (str1-str2);
    // }

// 09 Stop *******************************************************************

int main()
{

// 00 Start ******************************************************************

    // char str[] = "garden";

    // if (strcmp(str, "garden") == 0)
    //     printf("strlen(str) \n");
    // else
    //     printf("Not Equal \n");

/*
 * Output:
 *        strlen(str)
 */

// 00 Stop *******************************************************************

// 01 Start ******************************************************************

    // int index, *pt1, *pt2;
    // index = 39;

    // pt1 = &index;
    // pt2 = pt1;

    // printf("%d %d %d \n", index, *pt1, *pt2);

    // *pt1 = 13;

    // printf("%d %d %d \n", index, *pt1, *pt2);

/*
 * Output:
 *        39 39 39
 *        13 13 13
 */

// 01 Stop *******************************************************************

// 02 Start ******************************************************************

    // char str[10];
    // int i;

    // for(i=0;i<5;i++)
    //     i[str] = 'A';
    // i[str] = '\0';

    // printf("%s \n", str);

/*
 * Output:
 *        AAAAA
 */

// 02 Stop *******************************************************************

// 03 Start ******************************************************************

    // int *hck = testhack();
    // printf("%d \n", *hck);

/*
 * Output:
 *        5
 */

// 03 Stop *******************************************************************

// 04 Start ******************************************************************

    // testhack(func1);
    // testhack(func2);
    // return 0;

/*
 * Output:
 *        Test
 *        Questions
 */

// 04 Stop *******************************************************************

// 05 Start ******************************************************************

    // scanf("%i %s", &n, str);
    // for(i=1;i<n/2+1;i++)
    //     if (str[0] == str[i])
    //         {
    //             for(j=0,flag=1;j<i;i++)
    //                 if (str[j] != str[j+i])
    //                     flag = 0;

    //             if (flag)
    //                 temp=i;
    //         }

    // printf("%i", (strlen(str) - 2*temp)+(temp?++temp:temp));

/*
 * Output:
 *        Segmentation fault (as of now)
 */

// 05 Stop *******************************************************************

// 06 Start ******************************************************************

    // http://google.com
    // printf("Cruel World!!\n");

/*
 * Output:
 *        Cruel World!!
 */

// 06 Stop *******************************************************************

// 07 Start ******************************************************************

    // pid_t var1;

    // var1 = fork();

    // if (var1 > 0)
    //     printf("%d\n", var1);
    // else
    //     printf("%d\n", -1);

    // return 0;

/*
 * Output:
 *        Process ID (eg: 5201)
 *        -1
 */

// 07 Stop *******************************************************************

// 08 Start ******************************************************************

    // fork();
    // fork();

    // printf("Print this line\n");

/*
 * Output:
 *        Prints line 4 times as below:
 *        Print this line
 *        Print this line
 *        Print this line
 *        Print this line
 */

// 08 Stop *******************************************************************

// 09 Start ******************************************************************

    // char *str = "abcdeabcdef";
    // printf("%d\n", fun(str));

/*
 * Output:
 *        11
 */

// 09 Stop *******************************************************************

// 10 Start ******************************************************************

    // int arr[20], i, sum=0;
    // int *p = arr;

    // for (i=0;i<20;i++)
    // {
    //     *(p+i) = 1;
    // }

    // for (i=0;i<20;i+=4)
    // {
    //     sum += *(p+i);
    //     printf(" %d", sum);
    // }

/*
 * Output:
 *        1 2 3 4 5
 */

// 10 Stop *******************************************************************

// 11 Start ******************************************************************

    // int x=10, y=10;

    // if (x == (-1))
    //     y--;

    // ++x;
    // printf("%d %d \n", x--, y--);

/*
 * Output:
 *        11 10
 */

// 11 Stop *******************************************************************

}