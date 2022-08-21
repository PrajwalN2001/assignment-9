#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c,ro,rt,d,e;
    printf("enter the value of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    switch(b*b-4*a*c==0)
    {
        case 1:
                ro=-b/(2*a);
                rt=ro;
                break;
        case 0:
                 switch(b*b-4*a*c>0)
                        {
                            case 1:
                                    ro=(-b+sqrt(b*b-4*a*c))/(2*a);
                                    rt=(-b-sqrt(b*b-4*a*c))/(2*a);
                                    break;
                            case 0:
                                    switch(b*b-4*a*c<0)
                                        {
                                            case 1:
                                                d=-b/(2*a);
                                                    ro=sqrt(4*a*c-b*b)/(2*a);
                                                    rt=/(2*a);

                                                    printf("roots are %d+%di",e,ro,d,e,rt,d);
                                                    break;
                                        }
                        }
    }
    printf("roots are %d %d",ro,rt);
    return 0;
}

