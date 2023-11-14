/*program for using arithemetic operators

Arithemetic operators are the type of operaters in c that  are used to perform mathematical in c program. They can be 
 used in programms to define expressions and mathematical formulae.

 Multiplies  both operands ex:A*B=200

 Integer Data Type:
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part). Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
Syntax of Integer
We use int keyword to declare the integer variable:

int var_name;
*/

#include <stdio.h>
int main()
{
    int a,b;
 a = 10;
 b = 5;
printf("a*b=%d\n",a*b);
return 0;
}
