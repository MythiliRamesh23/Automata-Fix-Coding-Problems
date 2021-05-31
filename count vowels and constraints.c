#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int  vCount=0,cCount=0;
    fgets(str, 100, stdin);
    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
                ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
         p++;
    }

    printf("Number of Vowels:%d \n",vCount);
    printf("Number of Consonants:%d ",cCount);
    return 0;
}
