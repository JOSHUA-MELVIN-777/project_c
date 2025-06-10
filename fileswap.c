#include <stdio.h>
char content1[1000];
char content2[1000];
int main() {
    FILE *fptr = fopen("file1.txt","r");
    if (fptr == NULL) {
        printf("Error opening the file");
    }
    else {
        //char content1[1000];
        fgets(content1,1000,fptr);
    }
    fclose(fptr);
    FILE *fptr1 = fopen("temp.txt","w");
    if (fptr1 != NULL) {
        fprintf(fptr1,content1);
    }
    fclose(fptr1);
    FILE *fptr2 = fopen("file2.txt","r");
    if (fptr2 == NULL) {
        printf("Error opening the file");
    }
    else {
        //char content1[1000];
        fgets(content2,1000,fptr2);
    }
    fclose(fptr2);
    FILE *fptr3 = fopen("file1.txt","w");
    if (fptr3 != NULL) {
        fprintf(fptr3,content2);
    }
    fclose(fptr3);
    // FILE *fptr4 = fopen("temp.txt","r");
    // if (fptr4 == NULL) {
    //     printf("Error opening the file");
    // }
    // else {
    //     //char content1[1000];
    //     fgets(content1,1000,fptr);
    // }
    FILE *fptr4 = fopen("file2.txt","w");
    if (fptr3 != NULL) {
        fprintf(fptr4,content1);
    }
    fclose(fptr4);
    return 0;
}