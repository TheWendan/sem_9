#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "93.h"


int main() {
    int page, length; char name[MAX];
    printf("Name of file: ");
    scanf("%1023s", name);    
    printf("Number of page: ");
    scanf("%d", &page);
    printf("Length: ");
    scanf("%d", &length);
    PageSeparation(name, page, length);
    return 0;
}