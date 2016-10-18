%module example

%{
#include "example.h"
%}

extern Data *data_new(int i, char *n);
extern void data_print(Data *d);
