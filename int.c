
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char op;
    int result;
    printf("enter an calucation :");
    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+')
    {
        result = num1 + num2;
        printf("%d", result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf("%d", result);
    }
    else if (op == '/')
    {
        result = num1 / num2;
        printf("%d", result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf("%d", result);
    }
    return 0;
}