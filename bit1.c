/*programme for bitwise operation.
Bitwise is a level of operation that involves working with individual bits which are the smallest units of data in a computing system. Each bit has single binary value of 0 or 1. Most programming languages manipulate groups of 8, 16 or 32 bits. These bit multiples are known as bytes.

The arithmetic logic unit (ALU) is a part of a computer's CPU. Inside the ALU, mathematical operations like addition, subtraction, multiplication and division are all done at bit level. For those operations, bitwise operators are used.
Bitwise AND operator is denoted by the single ampersand sign (&). Two integer operands are written on both sides of the (&) operator. If the corresponding bits of both the operands are 1, then the output of the bitwise AND operation is 1; otherwise, the output would be 0
A logical OR (|) operation functions differently from the AND operations. For each bit pair, the result is 1 if the first OR second bit is 1. If neither bit is 1, the result is 0.

A logical XOR (~) of each bit pair results in a 1 if the two bits are different, and 0 if they are the same (both zeros or both ones).

Logical NOT is represented as ^.

Left shift (<<), right shift (>>) and zero-fill right shift (>>>) bitwise operators are also known as bit shift operators.
*/


#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value a:\n");
    scanf("%d",&a);
    printf("enter the value b:");
    scanf("%d",&b);
    printf("a&b is %d\n",a&b);
    printf("a|b is %d\n",a|b);
    printf("a<<b is %d\n",a<<b);
    printf("a>>b is %d\n",a>>b);
    return 0;
}
