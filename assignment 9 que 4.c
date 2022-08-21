#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,num;

    printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\n2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    printf("\n3.Check whether a given set of three numbers are equilateral triangle or not");
    printf("\n4.EXIT");
    printf("\nenter your choice");
    scanf("%d",&num);
        switch(num)
        {

            case 1:
                printf("enter the three number");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b || b==c || a==c)
                    {
                        printf("isosceles triangle");
                    }
                else
                    {
                        printf("not an isosceles triangle");
                    }
                break;
            case 2:
                printf("enter the three number");
                scanf("%d %d %d",&a,&b,&c);
               if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
                    {
                        printf("right angle triangle");
                    }
                else
                    {
                        printf("not an right angle triangle");
                    }
                break;
            case 3:
                printf("enter the three number");
                scanf("%d %d %d",&a,&b,&c);
                 if(a==b && b==c)
                    {
                        printf("equilateral triangle");
                    }
                else
                    {
                        printf("not an equilateral triangle");
                    }
                break;
            case 4:
                exit(0);

        }

return 0;


}
