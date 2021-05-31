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
    char alph[100];

    int x,n;

    char *ptr;

    ptr = alph;

    scanf("%d",&n);

   for(x=0;x<n;x++)
    {
        *ptr=x+'A';
        ptr++;
        
    }
    ptr = alph;
    for(x=0;x<n;x++)
    {
       printf("%c  ", *ptr);
        ptr++;
    }

    return 0;
}
