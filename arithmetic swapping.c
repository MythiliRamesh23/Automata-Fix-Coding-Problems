#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    printf("Before Swapping: %d %d",a,b);

    a = a - b;   

    b = a + b;

    a = b - a;

    printf("\nAfter Swapping: %d %d",a,b);
   
    return 0;
}
