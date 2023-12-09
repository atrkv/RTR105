#include <stdio.h>
#include <math.h>


double my_atan(double x)
{
    return (x-((x*x*x)/3)+((x*x*x*x*x)/5)-((x*x*x*x*x*x*x)/7)+((x*x*x*x*x*x*x*x*x)/9)-((x*x*x*x*x*x*x*x*x*x*x)/11));
    //return x - (x*x*x)/3 + (x*x*x*x*x)/5 - (x*x*x*x*x*x*x)/7;
}

int main()
{
    double x;
    for (x=0.0; x<500; x++)
    {
        printf("x: %f\n",    x);
        printf("Actual: %f\n",    atan(x));
        printf("Approx: %f\n", my_atan(x));
        printf("\n");
    }
}