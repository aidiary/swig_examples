#include <stdio.h>
#include "example.h"

void set_array(Data *data) {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            data->array[i][j] = i * j;
        }
    }
}

void print_array(Data *data) {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d %d => %d\n", i, j, data->array[i][j]);
        }
    }
}

#if 0
int main() {
    Data data;
    set_array(&data);
    print_array(&data);

    return 0;
}
#endif
