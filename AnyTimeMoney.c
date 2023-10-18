#include <stdio.h>
#include <conio.h>
void main()
{
  int a, ac, amount = 10000, wamount, damount, tamount, cpin, pin = 12345, npin, rpin, i;
  printf("Insert Card\n\n");
  printf("Enter pin:");
  scanf("%d", &cpin);
  if (cpin == pin)
  {
    printf("\nHello User ->\n\n");
    do
    {
      printf("Choose the operation you want to perform :\n\n");
      printf("1.Check Balance\n2.Withdraw Cash\n3.Deposit Money\n4.Transfering funds\n5.Change pin\n6.Exit\n\n");
      scanf("%d", &a);
      switch (a)
      {
      case 1:
      {
        printf("Your available balance is %d\n\n", amount);
        break;
      }
      case 2:
      {
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &wamount);
        if (wamount <= amount)
        {
          printf("Please collect the cash\n");
          printf("Your available balance is %d\n\n", amount = amount - wamount);
        }
        else
        {
          printf("Insufficient balance\n\n");
        }
        break;
      }
      case 3:
      {
        printf("Enter the amount you want to deposit: ");
        scanf("%d", &damount);
        printf("Amount deposited successfully\n");
        printf("Your available balance is %d\n\n", amount = amount + damount);
        break;
      }
      case 4:
      {
        printf("Enter the account number in which you want to transfer money: ");
        scanf("%d", &ac);
        printf("Enter the amount you want to transfer: ");
        scanf("%d", &tamount);
        if(tamount<=amount){
        printf("Money transfer succesfull to account number ****** \n");
        printf("Your available balance is %d\n\n", amount = amount - tamount);
        }
        else{
          printf("Insufficient balance\n\n");
        }
        break;
      }
      case 5:
      {
        printf("Enter the new pin: ");
        scanf("%d", &npin);
        printf("Renter the new pin: ");
        scanf("%d", &rpin);
        if (npin == rpin)
        {
          printf("Pin change successfull\n\n");
        }
        else
        {
          printf("Pin change unsuccessfull as new pin and re entered pin were not same\n\n");
        }
        break;
      }
      case 6:{
        printf("Thanks for visiting\n\n");
        exit(0);
      }
      default:
      {
        printf("Invalid choice\n\n");
      }
      }
    } while (a != 6);
      return 0;
  }
  else
  {
    printf("Wrong pin");
  }
}