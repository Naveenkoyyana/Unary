#include <stdio.h>
int main()
{
    int arr[10] = {3,6,9,12,15,18,21,30,27,24};
    int i,temp=0;
    printf("enter the element:\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        //printf("\ni value is %d \n",i);

    }  
   /* printf("array elements :\n");
    for(i=0; i<10; i++)
    {
      printf("%d ",arr[i] );
    }*/
    for(i=0;i<10;i++)
    {
        for (int j = i + 1; j < 10; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
 
                }
            }
    }
   /* printf("\nafter sorting \n");
    for(i=0; i<10; i++)
    {
      printf("%d ",arr[i] );
    }*/
    printf("7th highest value in the array is %d ",arr[6]);
    return 0;
}