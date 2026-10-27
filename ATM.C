#include <stdio.h>
int main()
{
 int pin = 1234;
 int pin1;
 int choice;
 float balance;
 float amount;

 printf("entered your pin  ");
 scanf("%d",pin1);

 if (pin1!= pin)
 {
  printf("inavlid error \n");
  return 0;
 }
 printf("\n ACCESS GARNTED");

 do
 {
  printf("1 . check balance\n");
  printf("2 .depost\n");
  printf("3.withdraw money \n");
  printf("exit\n");

  printf("enter yr choice");
  scanf("%d,&choice");

  switch (choice)

  {
   case 1: printf("your balance \n",balance );
   break;
   case 2:
   printf("enter deposit :");
   scanf("%f",&amount);

   if (amount> 0)
   {
    balance = balance + amount;
    printf("deposited succesfully \n");
    printf("new balance : \n",balance);

  }
  else
  {
   printf("Invalid answer  ! \n ");
  }
  break;

  case 3:
   printf("Enter withdraw amount : \n");
   scanf("%f",&amount);
   if (amount <=0)
   {
    printf("Invalid Amount \n");
   }
   else if (amount<= balance)
   {
    balance = balance - amount;
    printf("Please collect your CAsh\n");
    printf("Remaining balance %f",balance);
   }
   else
   {
    printf("Insufficent Balance \n");
   }
   break;
  case 4:
   printf("THANKU YOU BRO  for choosing our ATM\n");
   break;
  default:
   printf("Invalid choice\n");
  }
 } while (choice != 4);

 return 0;
}