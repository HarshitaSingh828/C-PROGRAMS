#include <stdio.h>
int main(){
    int number;
    printf("Enter the number 10");
    scanf("%d",&number);
    int a= 0,b=1;
    for(int i = 0; i <number; i++){
        printf("%d\n",a);
        int c = a+b;
        a = b;
        b = c;
    }
        return 0;
}