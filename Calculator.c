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
      scanf("%d" , &c);

      switch (c)
      { 
          case (1):
      {
          printf("%f",(a+b));
          break;
      }
      case (2):
      {
          printf("%f", (a-b));
          break;
      }
      case (3):
      {
          printf("%f", (a*b));
          break;
      }
      case (4):
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
