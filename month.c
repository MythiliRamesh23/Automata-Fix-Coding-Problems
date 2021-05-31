#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    
 
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},m; 
 
    scanf("%d",&m);
    if(m>12 || m<1)
    {
        
     printf("Invalid input");
    }
    else if(m==2)
    {
        printf("no of days in month 2 is either 29 or 28");
    }
    else
    
        printf("%d days",a[m-1]);
 
}
