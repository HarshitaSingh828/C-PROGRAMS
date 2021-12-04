#include <stdio.h>
// #include <math.h>
int powerlinear(int x, int n);
int main()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d", &x);

    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    int f1 = powerlinear(x, n);
    printf("%d",f1);
}
int powerlinear(int x, int n)
{
    if (n == 0){
        return 1;
    }
    int f = powerlinear(x, n - 1) * x;
    return f;
}