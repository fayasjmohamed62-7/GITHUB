#include<stdio.h>
int main()
{
 char op;
 int a,b;
 printf("enter the operation : ");
 scanf("%d %c %d",&a,&op,&b);

 switch(op)
 {
  case '+':printf("%d  = ",a+b);
  break;
  case '-':printf("%d  = ",a-b);
  break;
  case '*':printf("%d  = ",a*b);
  break;
  case '/':
      if (b!=0) printf("%d  = ",a/b);
      else printf("cant divide by zero");
  break;
  default: printf("invalid operation");
 }
 return 0;
}