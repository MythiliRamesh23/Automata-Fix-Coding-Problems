#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
extern int a;
int main() {

    int a,lastDigit;
    scanf("%d",&a);
    lastDigit = a % 10;
    printf("output:%d",lastDigit);
    return 0;
}
