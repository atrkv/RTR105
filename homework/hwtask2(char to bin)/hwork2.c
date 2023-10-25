#include <stdio.h>

int main (void) {
    printf("\nEnter a decimal number between -128 and 127: ");
    int Tempvalue;
    scanf("%d", &Tempvalue);
    if (Tempvalue < -128)
    {
        printf("\nThe value is less than -128!");
        return 1;
    };
     if (Tempvalue > 127)
    {
        printf("\nThe value is more than 255!");
        return 1;
    };
    
    char value = Tempvalue;

    printf("\ndec value: %d",value);
    char val7 = value << 7;
    char val6 = value << 6;
    char val5 = value << 5;
    char val4 = value << 4;
    char val3 = value << 3;
    char val2 = value << 2;
    char val1 = value << 1;
    printf("\nbin value: ");
    printf("%d",(value>>7)*-1);
    printf("%d",(val1>>7)*-1);
    printf("%d",(val2>>7)*-1);
    printf("%d",(val3>>7)*-1);
    printf("%d",(val4>>7)*-1);
    printf("%d",(val5>>7)*-1);
    printf("%d",(val6>>7)*-1);
    printf("%d\n",(val7>>7)*-1);
    if (value < 0)
    {
        printf("(Two's complement)\n");
    };
    
    return 0;
}
