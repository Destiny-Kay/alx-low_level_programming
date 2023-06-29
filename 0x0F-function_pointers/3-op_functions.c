#include "3-calc.h"
/*FUNCTION OPERATORS*/
/**
 * op_add- finds sum of the operands
 * @a: first operand
 * @b: second operand
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub- finds the difference of operands
 * @a: first operand
 * @b: second operand
 * Return: the difference between a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul- finds product of operands
 * @a: first operand
 * @b: second operand
 * Return: the product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div- divides the operands
 * @a: first operand
 * @b: second operand
 * Return: the quotient of a and b
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - finds the modulus of operands
 * @a: first operand
 * @b: second operand
 * Return: the modulus of a % b
*/
int op_mod(int a, int b)
{
return (a % b);
}
