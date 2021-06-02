#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[100],i,j,choice=0,n,top=0;

     void push ()

     {

     int val;

     if (top == n-1 )
        printf("\nOverflow");
     

     else

     {
         
    for (i=0;i<n;i++)
    {
     
    scanf("%d",&val);

     top ++;

     stack[top] = val;
        
    }

     }

     }

     void pop ()

     {

     if(top == -1)

     printf("Underflow");

     else
    printf("\nThe Poped Element is:%d\n",stack[top]);

     top--;

     }

     void show()

     {

         printf("The Elements in the stack are:");
     for (i=top;i>0;i--)

     {

    
    printf("%d ",stack[i]);
     

    }

     if(top == -1)

     {

     printf("Stack is empty");

     }
          }

    int main ()

     {
        int n1;

     scanf("%d",&n);

     scanf("%d",&n1);

     if(n1>n)
     {
         printf("No.of.Elements is Higher than the size of the stack");
     }
    
     else

     {
         n=n1;

     push();

     show();

     pop();

     show();
 }

    return 0;
}
