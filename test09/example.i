%module example

%{
#include "example.h"
%}

%inline %{

/* array helpers */
void set_array(int *a, int i, int val) {
   a[i] = val;
}

int get_array(int *a, int i) {
   return a[i];
}

/* Create any sort of [size] array */
int *int_array(int size) {
   return (int *) malloc(size * sizeof(int));
}

%}

%include "example.h"
