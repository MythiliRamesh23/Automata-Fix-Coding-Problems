#include<stdio.h>
int main()
{
     int n=4,m,i=0;

     float avg,tot=0;


     while(i<=n)

     {

     scanf("%d",&m);
    
     tot+=m;
        
     i++;

     }

     avg=tot/5;

     printf("total:%0.0f",tot);

    
      printf("\navg:%.2f",avg);
     


    return 0;
}
