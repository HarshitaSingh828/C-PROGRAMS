#include <stdio.h>
void printdec(int value);
int main(){
    int value;
    printf("enter the value");
    scanf("%d", &value);
    printdec(value);
   
}
void printdec(int value){
    if(value == 0){
        return;
    }
    printf("%d\n",value);
    printdec(value-1);
}




