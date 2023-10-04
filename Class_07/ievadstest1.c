#include <stdio.h>

int main(){

	char str [15];
	int i;

printf("Name:\n");
scanf("%s", str);
printf("Age:\n");
scanf("%d", &i);
printf("Name:%s, Age:%d\n",str,i);
	int a = (2023 - i);
printf("Birth Year:%d\n",a);
return 0;
}
