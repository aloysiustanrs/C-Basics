#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    printf("Enter operator (-)(+)(*)(/): ");
    scanf("%c", &operator);
    printf("Enter num 1:");
    scanf("%lf", &num1);
    printf("Enter num 2:");
    scanf("%lf", &num2);

    if (operator== '-')
    {
        result = num1 - num2;
    }
    else if (operator== '+')
    {
        result = num1 + num2;
    }
    else if (operator== '*')
    {
        result = num1 * num2;
    }
    else if (operator== '/')
    {
        result = num1 / num2;
    }
    else
    {
        printf("Wrong operator");
        return 0;
    }
    printf("Result : %lf", result);

    return 0;
}