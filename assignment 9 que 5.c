#include<stdio.h>
int main()
{
    int num;
    printf("enter the number from 1,2 and 3");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
                printf("good");
                break;
        case 2:
                printf("better");
                break;
        case 3:
                printf("best");
                break;
        default:
                printf("invalid");
    }
    return 0;
}
