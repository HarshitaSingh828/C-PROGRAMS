#include <stdio.h>
int main(){
    int num;
    printf("Enter num ");
scanf("%d",&num);
int dig = 0;
while(num!= 0){
    num = num/10;
    dig++;
}
printf("%d\n",dig);
return 0;
}