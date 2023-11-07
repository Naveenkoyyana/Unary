//programme for finding area of rectangle
#include <stdio.h>
#define P 24
int a(int l,int b);
int main ()
{
    int l;
    printf("/n enter the rectangle l");
    scanf("%d", &l);
    int b;
    printf("/n enter the rectangle b");
    scanf("%d",&b);
    printf("area of rectangle %d",(2*(l+b)));
}
int a(int l,int b)
{
    return(2*(l+b));
}

