#include "capacitor.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void voltage_current(Capacitor *a, double dt, int num_steps = 50000, int resistor, double f_time, double I_T, double V_0, double capacitor)
{

};

int main()
{
    int resistor = 1000;
    double dt = 1e-6;
    int num_steps = 50000;
    double f_time = 5e-6;
    double I_T = 1e-2;
    double V_0 = 10;
    double capacitor = .100e-12;

    Capacitor *a = (Capacitor*)malloc(sizeof(Capacitor));
    a->time = (double*)malloc(50000*sizeof(double));
    a->voltage = (double*)malloc(50000*sizeof(double));
    a->current = (double*)malloc(50000*sizeof(double));


    free(a);
    return 0;
}
