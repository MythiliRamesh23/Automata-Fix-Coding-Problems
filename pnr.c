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
     int p,n,r,si;

    scanf("%d", &p);

    scanf("%d", &n);

     scanf("%d",&r);
      si = (p * n * r) /100;

    printf("The simple interest is:%d",si);

    return 0;
}
