#include <stdio.h>
#include "92.h"




int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Use: text1.txt text2.txt\n");
        return 1;
    }

    FILE* file1 = fopen(argv[1], "r");
    FILE* file2 = fopen(argv[2], "r");

    if (!file1 || !file2) {
        printf("Error opening files\n");
        return 1;
    }

    merge_files(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}