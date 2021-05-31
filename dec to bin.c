#include <math.h>
#include <stdio.h>
long long convert(int n);
int main() {
    int n;
    scanf("%d", &n);
    printf("The Binary value is : %d", convert(n));
    return 0;
}
long long convert(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
