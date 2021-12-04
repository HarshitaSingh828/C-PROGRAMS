#include <stdio.h>
int factorial(int f1);
int main()
{
    int value;
    printf("enter the value\n");
    scanf("%d", &value);
    int f1 = factorial(value);
    printf("%d", f1);
}
int factorial(int value)
{
    if (value == 0)
    {
        return 1;
    }
    int f = factorial(value - 1) * value;
    return f;
}
