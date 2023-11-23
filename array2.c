/*
Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing multiple values under a single name. In this article, we will study the different aspects of array in C language such as array declaration, definition, initialization, types of arrays, array syntax, advantages and disadvantages, and many more.

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list, inside curly braces:

int myNumbers[] = {25, 50, 75, 100};

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
    int num[6] = {3,7,11,15,19,30};
    num[4] = 19;
    printf("The output will be %d, num[4]");
    return 0;  
}





