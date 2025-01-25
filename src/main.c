#include <stdio.h>
#include "calculator.h"

int main()
{
    printf("Welcome to the Binary Calculator\n\n");
    printf("Enter the first number: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter the second number: ");
    int num2;
    scanf("%d", &num2);
    printf("Enter the operator (+, -, *, /): ");
    char op;
    scanf(" %c", &op);
    int result = calculate(num1, num2, op);
    printf("Result: %d\n", result);
    return 0;
}