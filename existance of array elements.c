#include <stdio.h>

#define MAX_SIZE 100  
int main()
{
    int arr[MAX_SIZE];
    int size, i, Search, found;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &Search);
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == Search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("%d is found at position %d", Search, i);
    }
    else
    {
        printf("%d is not found in the array", Search);
    }

    return 0;
}
