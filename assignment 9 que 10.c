#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ro,rt;
    float rp,ip,k,p;
    printf("enter the two number");
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
                                ro=(-b-sqrt(b*b-4*a*c))/(2*a);
                                rt=(-b+sqrt(b*b-4*a*c))/(2*a);
                                break;
                        case 0:
                                switch(b*b-4*a*c<0)
                                    {
                                        case 1:
                                            k=b;
                                            p=a;
                                            rp=-k/(2*p);
                                            ip=sqrt(4*a*c-b*b)/(2*a);

                                                ro=rp+ip;
                                                rt=rp-ip;
                                                break;
                                        case 0:
                                                break;
                                    }
                                    break;
                    }
                    break;

        }
        if(b*b-4*a*c>0 || b*b-4*a*c==0 )
            printf("your root is %d %d ",ro,rt);
        else
            printf("your root is %.2f+%.2f i ",rp,ip);

}
