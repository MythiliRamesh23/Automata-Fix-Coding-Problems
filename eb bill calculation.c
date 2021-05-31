#include<stdio.h>
int unit_consumed()
{
    int s,e;
    scanf("%d",&s);
    scanf("%d",&e);
    int units=(e-s);
    return units;
     }

void amount_calculate()
{
    int units=unit_consumed();
    int amt;
    if(units<=100)
    {
        amt = units*1.5;
    }
    else if(units<=250)
    {
        amt = (100*1.5)+((units-150) * 2);
    }
    else if(units <= 400)
    {
        amt = (100*1.5)+(150*2)+((units-250) * 3);
    }
    else{
        amt = (100*1.5)+(150*2)+(150*3)+((units-400) * 4);
    }
    printf("unit:%d",units);
    printf("\namount:%d",amt);
    
     }

int main()
{


     amount_calculate();

    return 0;
}
