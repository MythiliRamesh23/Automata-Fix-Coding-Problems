
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    scanf("%d", &pos);
    if(pos > size)
    {
        printf("Invalid position");
    }
    else
    {
           for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = num;
        size++; 
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
