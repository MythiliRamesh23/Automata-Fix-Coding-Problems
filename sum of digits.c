 
#include <stdio.h>
int sumOfDigits(int num);


int main()
{
    int num, sum;
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("Sum of digits: %d", sum);
    
    return 0;
}
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}
