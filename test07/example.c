#include <stdio.h>
#include "example.h"

void set_array(Data *data) {
    int i, j, k;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                data->array[i][j][k] = i * j * k;
            }
        }
    }
}

void print_array(Data *data) {
    int i, j, k;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                printf("%d %d %d => %d\n", i, j, k, data->array[i][j][k]);
            }
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
