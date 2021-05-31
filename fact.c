#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()    
{    
 int i,fact=1,number;    
  
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial = %d",fact);    
return 0;  
}
