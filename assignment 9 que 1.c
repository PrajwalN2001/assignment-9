#include<stdio.h>
int main()
{

    int num;
    printf("enter the month number");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("number of days is 31");
            break;
        case 2:
            printf("number of days is 28");
            break;
        case 3:
            printf("number of days is 31");
            break;
        case 4:
            printf("number of days is 30");
            break;
        case 5:
            printf("number of days is 31");
            break;
        case 6:
            printf("number of days is 30");
            break;
        case 7:
            printf("number of days is 31");
            break;
        case 8:
            printf("number of days is 31");
            break;
        case 9:
            printf("number of days is 30");
            break;
        case 10:
            printf("number of days is 31");
            break;
        case 11:
            printf("number of days is 30");
            break;
        case 12:
            printf("number of days is 31");
            break;
    }
    return 0;
}
