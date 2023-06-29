#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main(int argc, char **argv) {
    int j; int i = 0;
    char *filename = "text.txt";
    int n = argc > 1 ? atoi(argv[1]) : 5; // тернарный оператор кол-ва последних строк

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Opening error!\n");
        return 1;
    }
    char lines[n][MAX_LINE_LENGTH]; // буфер
    
    while (fgets(lines[i % n], MAX_LINE_LENGTH, file) != NULL) { // считывание
        i++;
    }
    for (j = 0; j < n; j++) { // вывод
        printf("%s", lines[i % n]);
        i++;
    }
    fclose(file);
    return 0;
}