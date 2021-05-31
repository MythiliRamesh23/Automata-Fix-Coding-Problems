#include <stdio.h>
#include <string.h>
void swap(int*, int *);

int main()
{
    int a, y;
    scanf("%d %d", &a, &y);
    printf("before swapping a=%d and y=%d", a,y);
    swap(&a, &y);        
    printf("\nafter swapping a=%d and y=%d", a, y);
}
 void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
