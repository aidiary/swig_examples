#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"

void print_id(int *id_list, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("%d = %d\n", i, id_list[i]);
    }
}
