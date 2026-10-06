#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int GradeCode;
    int PassCount = 0;
    int FailCount = 0;

    char RegNo[50];
    char name[50];
    float marks;
    char grade;
    char status[10];

     printf("Enter Number of Students: \n");
     scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
      printf("\n ---Enter Details for Student %d---\n", i);

      printf("Enter Student Registration Number: \n");
      scanf("%49s", RegNo);

      printf("Enter Name: \n");
      scanf(" %49[^\n]", name);

      printf("Enter Marks: \n");
      scanf("%f", &marks);

      if (marks < 0 || marks > 100)
      {
         printf("Invalid Marks! Please Enter Marks between 0 and 100.\n");
         continue;
      }

      GradeCode = (int)marks / 10;

      switch (GradeCode)
      {
         case 10:
         case 9:
         case 8:
         case 7:
            grade = 'A';
            break;

         case 6:
            grade = 'B';
            break;

         case 5:
            grade = 'C';
            break;

         case 4:
            grade = 'D';
            break;

         default:
            grade = 'F';
      }

      switch (grade)
      {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
          strcpy(status, "Pass");
          break;

        case 'F':
          strcpy(status, "Fail");
          break;

      }

      if(strcmp(status, "Pass") == 0)
      {
         PassCount++;
      }
      else
      {
        FailCount++;
      }

      printf("\n---STUDENT INFORMATION---\n");
      printf("Registration Number: %s\n", RegNo);
      printf("Name: %s\n", name);
      printf("Marks: %.2f\n", marks);
      printf("Grade: %c\n", grade);
      printf("Status: %s\n", status);

    }

     printf("\n--- CLASS SUMMARY ---\n");
     printf("Total Students: %d\n", n);
     printf("Students Passed: %d\n", PassCount);
     printf("Students Failed: %d\n", FailCount);

    return 0;
}
