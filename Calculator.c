#include<stdio.h>

void main ()
{
     float a,b;
     int c;
      printf("------------NOTE----------- \n");
      printf("You can able to do one opration at a time \n");
      printf("Enter the two numbers\n");
      scanf("%f" , &a);
      scanf("%f" , &b);
      printf("+,-,*,/");
      scanf("%c" , &c);

      switch (c)
      { 
          case '+':
      {
          printf("%f",(a+b));
          break;
      }
      case '-':
      {
          printf("%f", (a-b));
          break;
      }
      case '*':
      {
          printf("%f", (a*b));
          break;
      }
      case '/':
      {
          printf("%f",(a/b));
          break;
      }
      
      default:
      {
          printf("Invalid credentials");
        break;
      }

    }
}
