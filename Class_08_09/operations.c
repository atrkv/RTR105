#include <stdio.h>

int main(void){

char c1 = 45, c2 = 065, c3;
int i1 = "F", i2 = 0x5695;
float f1 = 8.896, f2 = 74.3e-2;
double d1 = 0.000000001, d2 = 1.e-10, d3;

// /operācijas pētīšana
c3 = c2 / c1;
printf("%d / %d = %d , (no atmiņas - %d)\n", c2,c1,c2/c1,sizeof(c2/c1),c3);

return 0;
}
