#include<stdio.h>
int main()
{

    int unit,x;
    float bill;
    printf("enter the unit");
    scanf("%d",&unit);
    switch(unit<=50)
    {
        case 1: bill=unit*(0.50);
                break;
        case 0:
            switch(unit<=150)
            {
                    case 1:
                        x=unit-50;
                        bill=(x*(0.75))+50*(0.50);
                        break;
                    case 0:
                            switch(unit<=250)
                                    {
                                            case 1:
                                                x=unit-100;
                                                bill=(x*(1.20)+100*(0.75)+50*(0.50));
                                                break;
                                            case 0:
                                                        switch(unit>250)
                                                            {
                                                                    case 1:
                                                                        x=unit-250;
                                                                        bill=(x*(1.50)+100*(1.20)+100*(0.75)+50*(0.50));
                                                                        break;
                                                                    case 0:
                                                                        break;

                                                            }
                                                            break;
                                    }
                                    break;
            }
            break;

    }
    bill=(bill*6)/5;
    printf("total ruppes is %.2f",bill);

    return 0;

}

