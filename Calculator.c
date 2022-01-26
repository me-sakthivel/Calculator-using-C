#include <stdio.h>
#include <conio.h>
int main()
{
     float a,b;
     int c;
      printf("------------NOTE----------- \n"You can able to do one opration at a time\n Eter the two numbers\n");
      scanf("%f%f%d,a&,&b,&c);

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
            getch();
            return 0;
            }
