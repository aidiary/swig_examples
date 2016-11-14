#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"

void set(int id, Foo *pfoo, Bar *pbar)
{
    pfoo->id = id;
    pbar->id = id;
}

void print_id(Foo *pfoo, Bar *pbar)
{
    printf("id = %d %d\n", pfoo->id, pbar->id);
}
