#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char RegNo[50];
    char name[50];
    float marks;
    char grade;
    char status[10];
    int n;

     printf("Enter Number of Students: \n");
     scanf("%d", &n);

     for (int i = 1; i <= n; i++)
     {
     printf("Enter Student Registration Number: \n");
     scanf("%29s", RegNo);

     printf("Enter Student Name: \n");
     scanf("%49s", name);

     printf("Enter Marks: \n");
     scanf("%f", &marks);

      if (marks >= 70)
    {
        grade = 'A';
    }
    else if (marks >= 60)
    {
        grade = 'B';
    }
    else if (marks >= 50)
    {
        grade = 'C';
    }
    else if (marks >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    if (marks >= 40)
    {
      strcpy(status, "Pass");
    }
    else
    {
      strcpy(status, "Fail");
    }

    printf("\n--- STUDENT INFORMATION ---\n");
    printf("Registration Number: %s\n", RegNo);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);
    printf("Status: %s\n", status);

    }

    return 0;
}
