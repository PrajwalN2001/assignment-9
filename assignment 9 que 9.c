#include<stdio.h>
int main()
{
    int num,a;
    printf("enter the even number");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 1:
                printf("the upper nearest odd number is %d",num+1);
                break;
        case 0:
                printf("INVALID ENTRY");
                break;

    }
    return 0;
}


