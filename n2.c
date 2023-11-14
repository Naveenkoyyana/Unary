/*C programs using integer,float,character, and addition both interger values.
Integer Data Type:
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part). Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
Syntax of Integer
We use int keyword to declare the integer variable:

int var_name;

Float Data Type:
In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
Syntax of float
The float keyword is used to declare the variable as a floating point:

float var_name;

Character Data Type
Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.

Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c
Syntax of char
The char keyword is used to declare the variable of character type:

char var_name;
*/
#include <stdio.h>
int main()
{
int a = 10;
float f = 7.5;
char c = 'n';
int d = 5;
    printf("hi naveen this is my 2nd programm/n");
    printf("The value of a is %d /n", a);
    printf("The value of f is %f /n", f);
    printf("The value of c is %c /n", c);
    printf("sum of a and d is %d /n", a+d);
    return 0;
}