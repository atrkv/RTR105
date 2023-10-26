#include <stdio.h>
#include <string.h>

int main(){
    char string[4];
int ut = 0;
int dt = 0;
int tt = 0;
char uno,dos,tres,sorttype;
printf("\nInput three characters:\n");
scanf("%c %c %c",&uno,&dos,&tres); //Scan for chars
getchar();//exclude enter
if (uno >= dos)//compare chars, assign order
{
    ut++;
    
}else(dt++);
if (uno >= tres)
{
    ut++;
}else (tt++);
if (dos>=tres)
{
    dt++;
}else(tt++);
//insert chars into string in alphabetic order
string[ut] = uno;
string[dt] = dos;
string[tt] = tres;

printf("Choose the sorting order.\nInput '>' for alphabet sort,\n or '<' for the opposite\n");
scanf("%c",&sorttype);
if (sorttype == 60)//display alphabet-sorted string backwards
{
printf("%c", string[2]);
printf("%c", string[1]);
printf("%c", string[0]);
return 0;
}
if (sorttype == 62)//display sorted string
{
printf("%s",string);
return 0;
} else {printf("Unexpected character.");
return 1;}

return 0;
}