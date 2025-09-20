#include <stdio.h>

int main() {
    int num1, num2, sum,subtract, multiply, divide;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    subtract = num1 - num2;
    printf("Difference of %d and %d is %d\n", num1, num2, subtract);
    multiply = num1 * num2;
    printf("Product of %d and %d is %d\n", num1, num2, multiply);
    if (num2 != 0) {
        divide = num1 / num2;
        printf("Quotient of %d and %d is %d\n", num1, num2, divide);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}