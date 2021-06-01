#include <stdio.h>
void display();

int main()
{
    display();
    display();
    display();
    display();
}
void display()
{
    int n;
    static int c = 1;
    scanf("%d",&n);
    c = c + n;
    printf("%d ",c);
}
