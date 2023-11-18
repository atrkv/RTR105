//TASK 6
//Below are declacations for an int value aswell as four functions that will modify it.
//This is followed by an infinite loop in which the user can run said functions and modify the value.
//The loop has a 3 second delay between runs, and displays the value of "value" at the end, allowing the user to keep track of any changes made to it.
//The "value"'s integer value persists through iterations.
#include <stdio.h>
#include <string.h>
int value = 0;

void noArgsNoReturn(){
    value = 1;
}//changes a value when called

void argsNoReturn(arg){
    value = arg;
}//changes a value to argument when called

int noArgsReturn(){
    return value;
}//returns a value when called

int argsReturn(arg){
    value = arg;
    return value;
}//changes a value to arg, then returns it

//main
int main(){
for(;;){
    int argument = 0;
    int selection = 0;
printf("\nDebug value:%d",value);
printf("\nChoose a function to run:\n1) No arguments, no return\n2) Arguments, no return\n3) No arguments, return\n4) Arguments, return\n(1-4)\n");
scanf("%d",&selection);
getchar();
printf("\nSelection:%d",selection);


if (selection == 1)
{
    noArgsNoReturn();
}
if (selection == 2)
{
    printf("\nProvide an integer value:");
    scanf("%d",&argument);
    getchar();
    argsNoReturn(argument);
}
if (selection == 3)
{
    printf("\nReturned value: %d", noArgsReturn());
}


if (selection == 4)
{
    printf("\nProvide an integer value:");
    scanf("%d",&argument);
    getchar();
    argsReturn(argument);
    printf("\nReturned value: %d", argsReturn());
}
printf("\nDebug value: %d", value);
printf("\nUse Ctrl+C to quit");
sleep(3);
}
}