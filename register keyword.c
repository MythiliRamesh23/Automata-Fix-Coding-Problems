#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int m,n;
    register int num;
    scanf ("%d %d", &m, &n);
    for (num = m; num <= n; num++) {
    printf("%d ", num);
 }
   return 0;
}
 
