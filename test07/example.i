%module example

%{
#include "example.h"
%}

%ignore array;

%inline %{
    int get_array(int array[10][10][10], int i, int j, int k) {
        return array[i][j][k];
    }
%}

%include "example.h"
