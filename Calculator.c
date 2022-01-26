#include <stdio.h>
int main ()
{
    float a,b;
    int c;
    printf("Enter the two numbers \n Enter the num A&B");
    scanf("%f%f%d",&a,&b,&c);

    switch (c)
    {
        case 1:
        {
            printf("%f",a+b);
            break;
        }

        case 2:
        {
            printf("%f",a*b);
            break;
        }

        case 3:
        {
            printf("%f",a*b);
            break;
        }

        case 4:
        {
            printf("%f",a/b);
            break;
        }

        default :
        {
            printf("Invalid credentials");
            break;
        }
    }
    return 0;
}
