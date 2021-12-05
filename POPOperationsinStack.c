#include<stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int* arr;
};
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top ++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
    }
    else{
     int val = ptr->arr[ptr->top] ;
        ptr->top-- ;
        return val;
    }
}
int main(){
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s-> size = 2;
    s-> top = -1;
    s-> arr = (int*)malloc (s->size* sizeof(int));

    push(s, 1);
    push(s, 23);
    push(s,2);
    
    printf("POPPED ELEMENT : %d",pop(s));
}

