// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main(){
	
    char op;
    int a;
    int b;
    int result;

    printf("Enter an operator (+, -, *, /,%): ");
    scanf(" %c", &op);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        result = a + b;
        printf("Result: %d\n", result);
        break;
    case '-':
        result = a - b;
        printf("Result: %d\n", result);
        break;
    case '*':
        result = a * b;
        printf("Result: %d\n", result);
        break;
    case '/':
        if (b != 0)
            printf("Result: %d\n", a / b);
        else
            printf("Error: Division by zero!\n");
        break;
    case '%':
        if (b != 0)
            printf("Result: %d\n", a % b);
        else
            printf("Error: Division by zero!\n");
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}