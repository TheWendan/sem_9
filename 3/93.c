#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

// количесвто срок
void number(int num_of_str, const char *line) {
    printf("%d: %s", num_of_str, line);
}

// количество страниц
void page(int num_of_page) {
    printf(" - Page %d -\n", num_of_page);
}

// функция разделения 
void PageSeparation(const char *name_file, int str_on_page, int max_length) {
    FILE *file = fopen(name_file, "r");
    if (file == NULL) {
        printf("Not read!\n");
        return;
    }
    char line[MAX];
    int num_of_str = 0, line_count = 0, curr_page = 1;
    while (fgets(line, sizeof(line), file) != NULL) {
        line_count++;
        num_of_str = (line_count - 1) % str_on_page + 1;
        number(num_of_str, line);
        if (num_of_str == str_on_page) {
            page(curr_page);
            curr_page++;
        }
    }
    fclose(file);
}