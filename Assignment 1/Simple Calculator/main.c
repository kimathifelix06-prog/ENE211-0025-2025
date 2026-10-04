#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare the required variables
    double a,b;
    double add,sub,multi,div;

    //Prompt user for input
    printf("Enter two numbers (separated by a space):");
    if(scanf("%lf %lf", &a, &b) !=2) {
       printf("Invalid input. Please enter numbers only.\n");
       return 1;
    }

    //Perform arithmetic operations
    add=a+b;
    sub=a-b;
    multi=a*b;

    //Display basic results using printf
    printf("\n--- Results ---\n");
    printf("Addition (a+b): %.2f\n",add);
    printf("Subtraction (a-b): %.2f\n",sub);
    printf("Multiplication (a*b): %.2f\n",multi);

    //Handle division by zero safely
    if (b !=0){
        div = a/b;
        printf("Division (a / b): %.2f\n", div);
    } else {
        printf("Division (a / b): Error! Division by zero is undefined.\n");
    }
    return 0;

}
