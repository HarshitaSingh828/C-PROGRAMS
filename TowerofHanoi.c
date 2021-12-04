#include <stdio.h>
void toh(int n, int A, int B, int C);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    int A;
    printf("Enter the value of A\n");
    scanf("%d",&A);

    int B;
    printf("Enter the value of B\n");
    scanf("%d",&B);

    int C;
    printf("Enter the value of C\n");
    scanf("%d",&C);
    toh(n,A,B,C);
}
void toh(int n, int A, int B, int C){
    if(n == 0){
            return;
        }
        toh( n-1 ,A , C ,B);
        // printf("%d", n + "%d["+A+" %d-> "+B+"%d]");
        printf("%d [ %d --> %d ]\n",n,A,B,C);
        toh(n-1, C, B ,A);
}