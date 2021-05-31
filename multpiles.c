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
     int n,i,r=1;

     scanf("%d",&n);

     for(i=1;i<=n;i++){

     r=n*i;

     printf("%d ",r);

     }

    return 0;
}
