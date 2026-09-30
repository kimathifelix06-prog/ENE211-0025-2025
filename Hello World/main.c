#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variable
    //dataType variableName
    char userName[50];

    printf("Please enter userName\n"); //output
    scanf("%s",userName); //input
    printf("Hello %s", userName);//output
    return 0;
}
