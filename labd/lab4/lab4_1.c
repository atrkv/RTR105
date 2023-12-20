#include <stdio.h>
#include <math.h>

void main()
{
    float a = 0, b = 0, eps = 1.e-3, h, integr1 = 0., integr2, precis;
    int k, n = 2;
    // get values from user
    printf("\nEnter value for a: ");
    scanf("%f", &a);
    getchar();
    printf("\nEnter value for b: ");
    scanf("%f", &b);
    getchar();
    printf("\nEnter precision (numbers past .): ");
    scanf("%f", &precis);
    getchar();
    eps = (1 / pow(10, precis));
    a += 2 * eps; // this fixes it somehow

    // calculation taisnstur
    integr2 = (b - a) * (atan(a) + atan(b)) / n; //(b−a)/2.∗sin(a)+(b−a)/2.∗sin(b);
    printf("%lf\t%lf\t%lf", atan(a), atan(b), ((b - a) * (atan(a) + atan(b)) / n));
    n = 1;
    while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        for (k = 0; k < n; k++)
        {
            integr2 += h * atan(a + (k + 0.5) * h);
            printf("\nchange:%lf", (h * atan(a + (k + 0.5) * h)));
        }

        printf("\nintegr2:%lf", integr2);
    }

    printf("\nIntegraalja (Taisnstuura) veertiba: %.2f\n", integr2);
}