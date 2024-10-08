#include "capacitor.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define resistor 1000
#define dt 1e-6
#define steps 50000
#define f_time 5e-6
#define I_T  1e-2
#define V_0  10
#define capacitor .100e-12


void voltage_current(Capacitor *a, int i)
{
    //equation for voltage
    a->voltage[i+1]=a->voltage[i]+(I_T*dt*(1/capacitor));
    //equation for current
    a->current[i+1]=a->current[i]-((a->current[i]/(resistor*capacitor))*dt);
    //increment time
    a->time[i+1] += dt;
}

int main()
{
    Capacitor *a = (Capacitor*)malloc(sizeof(Capacitor));
    a->time = (double*)malloc(50000*sizeof(double));
    a->voltage = (double*)malloc(50000*sizeof(double));
    a->current = (double*)malloc(50000*sizeof(double));

    a->time[0] = 0;
    a->current[0] = I_T;
    a->voltage[0] = 0;

    for (int i = 0; i < steps; i++)
    {
        voltage_current(a, i);
    }

    free(a->time);
    free(a->voltage);
    free(a->current);
    free(a);
    return 0;
}
