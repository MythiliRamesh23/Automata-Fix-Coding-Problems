#include <stdio.h>

int main()
{
    char str[30],ch;
    int  ind[10],loop,j;
    scanf("%[^\n]s",str);
    getchar();
    ch=getchar();
    
    j=0;
    for(loop=0; str[loop]!='\0'; loop++)
    {
        if(str[loop]==ch)
            ind[j++]=loop;
    }
    printf("Indexes:");
    for(loop=0; loop<j; loop++)
        printf("%d ",ind[loop]);

    return 0;
}
