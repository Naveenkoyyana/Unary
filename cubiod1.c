//programme for finding volume and surface area of cubiod
#include <stdio.h>
int main ()
{
    float lenght, width, height;
    float SA, Volume, LSA;
    printf("/n please enter length of cubiod  :-" );
    scanf("%f",&lenght);
    printf("/n please enter width of cubiod  :-" );
    scanf("%f",&width);
    printf("/n please enter height of cubiod  :-" );
    scanf("%f",&height);
    SA= 2*(lenght*width+width*height+height*lenght);
    Volume= lenght*width*height;
    LSA= 2*height*(lenght+width);
    printf("/n surface area of cubiod= %.2f\n",SA);
    printf("/n volume of cubiod, volume =%.2f\n",Volume);
    printf("/n later surface area of a cubiod =%.2f\n", LSA);
    return 0;
}



