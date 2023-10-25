#include <stdio.h>
#include <string.h>

int main () {

char string[350];
printf("Type!\n");
//scanf("%s",&string);
fgets(string, 350, stdin);
//printf("%s",string);
int chcount = 0;
int wordcount = 0;

for(int i=0;i<strlen(string);i++){
if (string[i] == 32){
chcount = 0;
} 
else {chcount++;}

if (chcount ==5){
wordcount++;
}
}

printf("Number of words with 5 or more characters: %d\n", wordcount);
return 0;

}
