//write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>  
int main()
{
    char operator;  // Operator variable to store the operator
    double first, second;    
    printf("Enter an operator (+, -, *, /, %): ");  
    scanf("%c", &operator);  
    printf("Enter two operands: ");  
    scanf("%lf %lf", &first, &second);  
    switch(operator)  
    {  
        case '+':  
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);  
            break;  
        case '-':  
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);  
            break;  
        case '*':  
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);  
            break;  
        case '/':  
            if(second != 0.0)  
                printf("%.1lf / %.1lf = %.1lf", first, second, first / second);  
            else  
                printf("Error! Division by zero.");  
            break;  
        case '%':  
            if((int)second != 0)  
                printf("%d %% %d = %d", (int)first, (int)second, (int)first % (int)second);  
            else  
                printf("Error! Division by zero.");  
            break;  
        default:  
            printf("Error! Operator is not correct");  
    }  
    return 0;
}