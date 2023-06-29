#include <stdio.h>
#include <string.h>
#include "92.h"


void merge_files(FILE* file1, FILE* file2) {
    char line1[MAX_LINE_LENGTH];
    char line2[MAX_LINE_LENGTH];
    int eof1 = 0;
    int eof2 = 0;

    while (!eof1 || !eof2) // пока оба eof не станут 1
    { 
        if (!eof1 && fgets(line1, MAX_LINE_LENGTH, file1)) 
        {
            printf("%s", line1);
            //проверка последнего символа на /n для корр. вывода
            if(line1[strlen(line1)-1] != '\n')
                putchar('\n'); 
        } 
        else 
        {
            eof1 = 1;    
        }
        if (!eof2 && fgets(line2, MAX_LINE_LENGTH, file2)) 
        {
            printf("%s", line2);
            //проверка последнего символа на /n для корр. вывода
            if(line2[strlen(line2)-1] != '\n')
                putchar('\n'); 
        } 
        else 
        {
            eof2 = 1;
        }
    }
}