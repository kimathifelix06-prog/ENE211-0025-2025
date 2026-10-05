#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    //Declare variables
    const int CorrectPin = 5473;
    int UserPin;
    int Attempts = 0;
    int AccessGranted = 0;

    while (Attempts < 3)
    {
     printf("Enter Your 4-digit PIN: ");
     scanf("%d", &UserPin);
     Attempts++;

     if (UserPin < 1000){
     printf("PIN is too short (Must be 4 digits)\n");
    }else if (UserPin > 9999) {
     printf("PIN is too long (Must be 4 digits)\n");
    }else {
     printf ("PIN is exactly 4 digits\n");

     if(UserPin==CorrectPin){
    printf("Access Granted! Door Unlocked.\n");
    AccessGranted = 1;
    break;
    }
    else {
    printf("Access Denied!\n");
    }
    }
    if (Attempts < 3) {
        printf("Remaining Attempts: %d\n", 3 - Attempts);
    }
    }

    if(Attempts == 3 && AccessGranted == 0) {
      printf("System Locked! Wait for 5 seconds...\n");
      for (int i = 5; i >= 1; i--) {
        printf("%d...\n", i);
        Sleep(1000);
      }
      printf("You can try again now.\n");

    }

    if (UserPin==CorrectPin){
        int Choice;
    printf("\n === Device Menu === \n");
    printf("1. Open Door\n");
    printf("2. Change UserName\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
    scanf("%d", &Choice);

    switch (Choice) {
  case 1:
    printf("Door is Already Open.\n");
    break;
  case 2:
    printf("Change UserName feature coming soon.\n");
    break;
  case 3:
    printf("Change PIN feature coming soon.\n");
    break;
  case 4:
    printf("Exiting System...\n");
    break;
  default:
    printf("Invalid Option! Please try  again.\n");
    }
    }

    return 0;

}

