#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    
    scanf("%d", &dividend);
   
    scanf("%d", &divisor);

    quotient = dividend / divisor;

    remainder = dividend % divisor;
    scanf("%d", &quotient);
    scanf("%d", &remainder);
    printf("quotient=%d\n", quotient);
    printf("remainder=%d", remainder);
    return 0;
}
