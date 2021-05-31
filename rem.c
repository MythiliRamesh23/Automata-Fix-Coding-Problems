#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,rem;
    scanf("%d %d",&a,&b);
    rem=a%b;
    scanf("%d",&rem);
    printf("The remainder is %d",rem);
    return 0;
}
