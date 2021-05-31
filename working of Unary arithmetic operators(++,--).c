#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
   

     int a , res;
    scanf("%d",&a);

     res = a++;

    printf("a is %d and res is %d", a,res);
     

    res = a--;

    printf("\na is %d and res is %d ", a, res);
     

    res =++a;

     printf("\na is %d and res is %d ", a, res);
     

    res = --a ;

     printf("\na is %d and res is %d ", a, res);
     

 

    return 0;
}
