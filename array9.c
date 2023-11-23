// array in runtime 
 
#include <stdio.h>
int main()
{
    int arr [3];
    int i,j,sum;
    printf ("enter array element:\n");
    for (i=0; i<3; i++)
    {
        scanf("%d", &arr [i]);
    }
    printf("enter array element:\n");
    for(j=0; j<3; j++)
    {
        scanf("%d", &arr [j]);
    }
    return 0;
}