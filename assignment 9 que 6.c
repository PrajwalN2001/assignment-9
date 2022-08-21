#include<stdio.h>
int main()
{

    int num;
    printf("enter the year");
    scanf("%d",&num);
    switch(num%100==0)
    {
        case 1:
            switch(num%400==0)
            {
                case 1:
                    printf("leap year");
                    break;
                case 0:
                    printf("not a leap year");
                    break;
            }
            break;
        case 0:
            switch(num%4==0)
            {
                    case 1:
                        printf("leap year");
                        break;
                    case 0:
                        printf("not a leap year");
                        break;

            }
            break;

    }

    return 0;

}
