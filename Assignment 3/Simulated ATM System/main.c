#include <stdio.h>
#include <stdlib.h>
int login(int correctPIN);
void showMenu();
void checkBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{
  int correctPIN = 5473;
  double balance = 5000.00;
  int choice;

  printf("                     ===========================\n");
  printf("                           WELCOME TO ATM\n");
  printf("                     ===========================\n");

  if(login(correctPIN))
  {
      printf("\n You Have Successfully Accessed Your Account. \n");

      do
    {
        showMenu();
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\n Thank You For Using Our ATM! \n");
                break;

            default:
                printf("\n Invalid choice! Please select 1-4. \n");
        }

    } while(choice != 4);
  }
  else
  {
      printf("\n Thank You For Using Our ATM. \n");
  }

   return 0;
}

int login(int correctPIN)
{
  int enteredPIN;
  int attempts = 0;

  while (attempts < 3)
  {
    printf("\n Enter your PIN: ");
    scanf("%d", &enteredPIN);

    if(enteredPIN == correctPIN)
    {
       printf("\n Login Successful! \n");
       return 1;
    }
    else
    {
        attempts++;

        printf("\n Incorrect PIN! \n");
        printf("Attempts Remaining: %d\n", 3 - attempts);
    }
  }

  printf("\n Maximum attempts exceeded! \n");
  printf("Access denied. \n");

  return 0;
}

 void showMenu()
{
    printf("\n                  ================================\n");
    printf("                               ATM MENU\n");
    printf("\n                  ================================\n");
    printf("1. Check Account Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("                    ================================\n");
    printf("Enter your choice: ");
}


void checkBalance(double balance)
{
    printf("\n                 ================================\n");
    printf("                           ACCOUNT BALANCE\n");
    printf("                   ================================\n");
    printf("Current Balance: Ksh %.2f\n", balance);
    printf("================================\n");
}

double deposit(double balance)
{
    double amount;

    printf("\n Enter amount to deposit: Ksh ");
    scanf("%lf", &amount);

    if (amount > 0)
    {
        balance = balance + amount;

        printf("\n Deposit successful! \n");
        printf("Amount deposited: Ksh %.2f\n", amount);
        printf("New account balance: Ksh %.2f\n", balance);
    }
    else
    {
        printf("\n Invalid deposit amount! \n");
        printf("Please enter a positive amount.\n");
    }

    return balance;
}

double withdraw(double balance)
{
    double amount;

    printf("\n Enter amount to withdraw: Ksh ");
    scanf("%lf", &amount);

    if (amount > 0)
    {
        if (amount <= balance)
        {
            balance = balance - amount;

            printf("\n Withdrawal successful!\n");
            printf("Amount withdrawn: Ksh %.2f\n", amount);
            printf("Remaining account balance: Ksh %.2f\n", balance);
        }
        else
        {
            printf("\n Insufficient account balance!\n");
            printf("Your current balance is: Ksh %.2f\n", balance);
        }
    }
    else
    {
        printf("\n Invalid withdrawal amount!\n");
        printf("Please enter a positive amount.\n");
    }

    return balance;
}

