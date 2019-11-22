/*
 *!-  CODE:  Read List of Files from Current Directory and
 *!-  Create "Files_List.txt" file that will Contain All the Names.
 */

#include  <stdio.h>
#include  <errno.h>
#include  <stdlib.h>
#include  <dirent.h>
#include  <string.h>

int main() {

    char  files_name[20];
    int  check=0;

    FILE  *fptr = NULL;

    DIR  *dirp=NULL;
    struct  dirent *dp;

    dirp = opendir(".");
    if (dirp == NULL) {
        printf("Error in openind Directory :: %d \n", errno);
        exit(1);
    }

    fptr = fopen("Files_List.txt","a+");
    if (fptr == NULL) {
        printf("Error in Opening/Creating :: %d \n", errno);
        exit(1);
    }

    while ((dp = readdir(dirp)) != NULL) {

        //!-  To print the File Name on Terminal
        //!-  printf("%s\n", dp->d_name);

        if (strcmp(dp->d_name, "Files_List.txt")) {
            //!-  To ignore "." in the Generated Text File.
            if (strcmp(dp->d_name, ".")) {
                //!-  To ignore ".." in the Generated Text File.
                if (strcmp(dp->d_name, "..")) {
                    check = fprintf(fptr, "%s", dp->d_name);
                    if (check < 0) {
                        printf("Error while writing in File \n");
                    }
                    check = fprintf(fptr, "\n");
                    if (check < 0) {
                        printf("Error while writing in File \n");
                    }
                }
            }
        }
    }

    fclose(fptr);
    closedir(dirp);
    
    return 0;
}

