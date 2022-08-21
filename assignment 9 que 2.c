#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,num;

    printf("1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.EXIT");
    printf("\nenter your choice");
    scanf("%d",&num);
        switch(num)
        {

            case 1:
                printf("enter the two number");
                scanf("%d %d",&a,&b);
                printf("sum is %d",a+b);
                break;
            case 2:
                printf("enter the two number");
                scanf("%d %d",&a,&b);
                printf("difference is %d",a-b);
                break;
            case 3:
                printf("enter the two number");
                scanf("%d %d",&a,&b);
                printf("product is %d",a*b);
                break;
            case 4:
                printf("enter the two number");
                scanf("%d %d",&a,&b);
                printf("division is %d",a/b);
                break;
            case 5:
                exit(0);

        }

return 0;


}
