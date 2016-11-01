%module example

%{
#include "example.h"
%}

%inline %{
    int get_array(int array[10][10], int i, int j) {
        return array[i][j];
    }
%}

%include "example.h"
