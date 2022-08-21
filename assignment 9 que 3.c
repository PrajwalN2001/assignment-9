#include<stdio.h>
int main()
{
    int num;
    printf("enter the day number of a week");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
                printf("today is Monday");
                break;
        case 2:
                printf("today is Tuesday");
                break;
        case 3:
                printf("today is Wensday");
                break;
        case 4:
                printf("today is Thrsday");
                break;
        case 5:
                printf("today is Friday");
                break;
        case 6:
                printf("today is Saterday");
                break;
        case 7:
                printf("today is Sunday");
                break;


    }
    return 0;
}
