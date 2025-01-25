#include <stdio.h>
#include "calculator.h"

int calculate(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        return add(num1, num2);
    case '-':
        return subtract(num1, num2);
    case '*':
        return multiply(num1, num2);
    case '/':
        return divide(num1, num2);
    default:
        return -1;
    }
}

int add(int num1, int num2)
{
    while (num2 != 0)
    {
        int carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
    return num1;
}

int subtract(int num1, int num2)
{
    return add(num1, ~num2 + 1);
}

int multiply(int num1, int num2)
{
    int result = 0;
    while (num2 != 0)
    {
        if (num2 & 1)
        {
            result += num1;
        }
        num1 <<= 1;
        num2 >>= 1;
    }
    return result;
}

int divide(int num1, int num2)
{
    if (num2 == 0)
    {
        return -1;
    }

    float result = 0;
    while (num1 >= num2)
    {
        int shift = 0;
        while ((num2 << shift) <= num1)
        {
            shift++;
        }
        shift--;

        num1 -= num2 << shift;
        result += 1 << shift;
    }

    return result;
}