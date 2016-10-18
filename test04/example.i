/* example.i */
%module example
%include "typemaps.i"

%apply double *OUTPUT { double *result };
%apply int *OUTPUT { int *width, int *height };

%inline %{
extern void add(double a, double b, double *result);
extern void sub(double a, double b, double *result);
extern void mul(double a, double b, double *result);
extern void getwinsize(int winid, int *width, int *height);
%}
