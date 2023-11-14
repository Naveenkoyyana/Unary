/*
Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing multiple values under a single name. In this article, we will study the different aspects of array in C language such as array declaration, definition, initialization, types of arrays, array syntax, advantages and disadvantages, and many more.

In C, we have to declare the array like any other variable before using it. We can declare an array by specifying its name, the type of its elements, and the size of its dimensions. When we declare an array in C, the compiler allocates the memory block of the specified size to the array name.

Syntax of Array Declaration
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];
*/

// programs to print random number in arrays.

 
#include <stdio.h>
int main()
{
    int num[6]={6,8,12,16,20,27};
    printf("The output will be %d",num[5]);
    return 0;
}

    




