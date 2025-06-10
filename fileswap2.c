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

    FILE *fptr1 = fopen("file2.txt","r+");
    if (fptr1 == NULL) {
        printf("Error opening the file");
    }
    else {
        //char content1[1000];
        fgets(content2,1000,fptr1);
        //fprintf(fptr1,content1);
    }
    fclose(fptr1);
    FILE *fptr2 = fopen("file1.txt","w");
    if (fptr2 != NULL) {
        fprintf(fptr2,content2);
    }
    fclose(fptr2);

    FILE *fptr3 = fopen("file2.txt","w");
    if (fptr3 != NULL) {
        fprintf(fptr3,content1);
    }
    fclose(fptr3);
    return 0;
}