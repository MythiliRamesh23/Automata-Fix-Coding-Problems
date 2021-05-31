#include<stdio.h>
int main()
{
    char string[20],sub[20];
    int position,length,i=0;
     scanf("%s",string);

     scanf("%d%d", &position, &length);
    
     while (i < length)
     {

     sub[i] = string[position+i];

     i++;

     }

     sub[i]='\0';

    
      printf("%s\n",sub);
     

    return 0;
}
