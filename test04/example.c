/* File: example.c */
#include <stdlib.h>

void add(double a, double b, double *result) {
    *result = a + b;
}

void sub(double a, double b, double *result) {
    *result = a - b;
}

void mul(double a, double b, double *result) {
    *result = a * b;
}

void getwinsize(int winid, int *width, int *height)
{
    *width = 400;
    *height = 300;
}
