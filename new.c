// Online C compiler to run C program online
#include <stdio.h>

int main() {
int num1 ,num2,num3,num4;
  int max = 0;
  printf("Enter the num1  \n");
  scanf("%d",&num1);
  printf("Enter the num2 \n");
  scanf("%d",&num2);
  printf("Enter the num3 \n");
  scanf("%d",&num3);
  printf("Enter the num4 \n");
  scanf("%d",&num4);


if(num1 >=max){
    max = num1;
}
if(num2 >= max){
    max = num2;
}
 if(num3 >= max){
    max = num3;
}
if(num4 >= max){ 
    max = num4;
}

printf("max of the four number is %d",max);
    return 0;
}