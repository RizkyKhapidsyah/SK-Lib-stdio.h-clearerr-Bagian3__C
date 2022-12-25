#pragma warning(disable:4996)

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;
    char feedback[100];

    char c;

    fp = fopen("file.txt", "w");

    c = fgetc(fp);
    if (ferror(fp)) {
        printf("Error in reading from file : file.txt\n");
    }
    clearerr(fp);

    if (ferror(fp)) {
        printf("Error in reading from  file : file.txt\n");
    }

    _getch();
    fclose(fp);
}