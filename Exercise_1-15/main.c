#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float TemperatureConversion(float x);

int main()
{
    double fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("Fahrenheit: %3.1f, Celsius %3.4f \n",fahr,TemperatureConversion(fahr));
    return 0;
}


float TemperatureConversion(float a)
{

    return ((5.0/9.0)*(a-32));
}
