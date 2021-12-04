#include <stdio.h>
int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    int marks[n];
    for(int i = 0; i < n ; i++){
      scanf("%d",&marks[i]);
    }
    for(int i = 0; i < n ; i++){
        printf("%d ",marks[i]);
    }
}