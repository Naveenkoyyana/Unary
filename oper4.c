/*programme for using Arthematic operators.

Integer Data Type:
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part). Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
Syntax of Integer
We use int keyword to declare the integer variable:

int var_name;

Arithmetic Operator in C :Operators are the special symbols in the C programming language, which is used to perform various mathematical and logical operations on the given operands to return the appropriate results. There are various operators in the C programming language such as Arithmetic Operators, Relational Operators, Shift Operators, Logical Operators, Bitwise Operators, Ternary or Conditional Operators, and Assignment Operators. But here, we will understand only the Arithmetic Operator in the C programming language.

Arithmetic Operators are the type of operators in C that are used to perform mathematical operations in a C program. They can be used in programs to define expressions and mathematical formulas.Plus Operator:It is a simple Plus (+) Operator used to add two given operands. We can use Plus Operator with different data types such as integer, float, long, double, enumerated and string type data to add the given operand.
Syntax:
C = A + B; 

Minus Operator:The minus operator is denoted by the minus (-) symbol. It is used to return the subtraction of the first number from the second number. The data type of the given number can be different types, such as int, float, double, long double, etc., in the programing language.
Syntax:
C = A - B;  

Divided operator:The divide operator is denoted by the (/) symbol. It is used  to return the divide of the first numner  from the second number. the data type of the given number can be different types, such as int, float, double,etc. in the programming language.
c =A /B;

Multiply  operator:The multipluy operator is denoted by the (*) symbol. It is used  to return the multiply of the first numner  from the second number. the data type of the given number can be different types, such as int, float, double,etc. in the programming language.
c =A /B;

*/
#include<stdio.h>
int main()
{
    int a=5,b=6,c=7;
    c=a+b;
    printf("a+b=%d\n",c);
    c=a-b;
    printf("a-b=%d\n",c);
    c=a*b;
    printf("a*b=%d\n",c);
    c=a/b;
    printf("a/b=%d\n",c);
    return 0;
}