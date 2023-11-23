/*
Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing multiple values under a single name. In this article, we will study the different aspects of array in C language such as array declaration, definition, initialization, types of arrays, array syntax, advantages and disadvantages, and many more.

In C, we have to declare the array like any other variable before using it. We can declare an array by specifying its name, the type of its elements, and the size of its dimensions. When we declare an array in C, the compiler allocates the memory block of the specified size to the array name.

Syntax of Array Declaration
data_type array_name [size];
         o
*/

// c programme illustrate element access using array  
// subscript

#include <stdio.h>
int main()
{
  
      // array declaration and intialization
      int arr[5] ={5,15,20,30,40};

      //accessing element at index 4 i.e last element
      printf("element an arr[4]: %d\n", arr[4]);

      //accessing element at index 2 i.e third element
      printf("element an arr[2]: %d\n", arr[2]);
      
      //accessing element at index 0 i.e first element 
      printf("element an arr[0]: %d\n", arr[0]);
      
      
return 0;
}
