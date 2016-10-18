#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"

Data *data_new(int id, char *name)
{
    Data *d = malloc(sizeof(Data));
    if (d == NULL) {
        fprintf(stderr, "ERROR: malloc data");
        exit(1);
    }

    d->id = id;
    d->name = malloc(sizeof(char) * (strlen(name) + 1));
    if (d->name == NULL) {
        fprintf(stderr, "ERROR: malloc name");
        exit(1);
    }

    strcpy(d->name, name);

    return d;
}

void data_print(Data *d)
{
    printf("id = %d\n", d->id);
    printf("name = %s\n", d->name);
}
