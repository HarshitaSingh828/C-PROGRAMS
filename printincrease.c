#include <stdio.h>
void printinc(int value);
int main(){
int value;
printf("Enter the value\n");
scanf("%d",&value);
printinc(value);
}
void printinc(int value){
    if(value == 0){
        return;
    }
    printinc(value-1);
    printf("%d\n",value);
}