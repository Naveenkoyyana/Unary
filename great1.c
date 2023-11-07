#include <stdio.h>
int main()
{
    int a= 4,b= 7,c= 10;
    printf("value of a:\n",a);
    scanf("%d", &a);
    printf("value of b:\n" ,b);
    scanf("%d", &b);
    printf("value of c:\n",c);
    scanf("%d", &c);
    printf("a>b+c=%d\n", a>b+c);
    printf("b>a+c=%d\n", b>a+c);
    printf("c>a+b=%d\n", c>a+b);
    return 0;
}
