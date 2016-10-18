/* example.i */
%module example
%include "typemaps.i"

%apply double *OUTPUT { double *result };
%{
extern void add(double a, double b, double *result);
%}

extern void add(double a, double b, double *result);
