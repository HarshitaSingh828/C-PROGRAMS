#include <stdio.h>
void pzz(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    pzz(n);
}
void pzz(int n)
{
    if (n == 0)
    {
        return ;
    }
    printf("%d ", n);
    pzz(n - 1);
    printf("%d ", n);
    pzz(n - 1);
    printf("%d ", n);
}