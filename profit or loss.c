#include<stdio.h>
int main()
{
    float cp,sp, amt;

    float gp,lp;
    
    scanf("%f", &cp);
    scanf("%f", &sp);

     if(sp > cp)

     {
       amt=sp-cp;  
       gp=(amt/cp)*100;  
    
     printf("Profit:%.2f", amt);

     printf("\nGain percentage:%.2f",gp);

    }

     else if(cp > sp)

     {
        amt=cp-sp; 
        lp=(amt/sp)*100;
       printf("Loss:%.2f", amt);
         lp= round(lp);
        printf("\nLoss percentage:%.2f",lp);
 

 

     }

     else

     {
       printf("No Profit No Loss.");
     }

    return 0;
}
