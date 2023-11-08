//TASK 4
#include <stdio.h>
#include<string.h>

int main(){

int input = 0;
printf("Enter a number:\n");
scanf("%d",&input);//get number
getchar();
printf("Choose a data type.\nType 'int', 'char' or 'long'(long long int):\n");
char dataType[20];
scanf("%s", &dataType);//get datatype
getchar();


//CHAR
if (!strcmp(dataType, "char"))//check entered datatype and execute relevant operation
{

int i=1;
char output = 1;
while (i <= input)
{
char output1 = output * i; //get next step
int j = output1/output;
if (j == i) //check if new value is still within bounds of datatype
{
    output = output1;
}
else{
    printf("\nExceeded max possible value of datatype.");
    return 1;
}
i++;

}
printf("%d",output);
return 0;
};


//INT
if (!strcmp(dataType, "int"))//check entered datatype and execute relevant operation
{

int i=1;
int output = 1;
while (i <= input)
{
int output1 = output * i;
int j = output1/output;
if (j == i)
{
    output = output1;
}
else{
    printf("\nExceeded max possible value of datatype.");
    return 1;
}
i++;

}
printf("\nResult: %d",output);
return 0;
}


//LONG LONG INT
if (!strcmp(dataType, "long"))//check entered datatype and execute relevant operation
{

long long i=1;
long long output = 1;
while (i <= input)
{

long long output1 = output * i;
long long j = output1/output;
if (j == i)
{
    output = output1;
}
else{
    printf("\nExceeded max possible value of datatype.");
    return 1;
}
i++;

}
printf("\nResult: %lld",output);
return 0;
}

printf("Unexpected entry.");
return 1;
}