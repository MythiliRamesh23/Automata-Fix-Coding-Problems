#include <stdio.h>
#define MAX_SIZE 100 

void toggleCase(char * str);


int main()
{
    char str[MAX_SIZE];

    gets(str);


    toggleCase(str);

    printf("%s", str);

    return 0;
}


void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}
