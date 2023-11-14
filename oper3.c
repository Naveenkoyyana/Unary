/*programme for using  arthimetic operators.

Float in a C programming language can be referred to as a data type that is used to store the floating point numbers. Float in C has a memory size of 4 bytes i.e, 32 bits. We can use the float precisely upto 7 digits after that the float in c will give a garbage value. If we want to store a number beyond the range of float in c we can use the double.

Syntax of Float in C
The syntax of float in c is given below:

float variable_name=val;

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
    float A,B;
    printf("enter value A:\n");
    scanf("%f", &A);
    printf("enter value B:\n");
    scanf("%f", &B);
    printf("A+B= %f +A-B= %f\n", ((A+B)+(A-B)));
    printf("A*B= %f +A/B= %f\n", ((A*B)+(A/B)));
}







