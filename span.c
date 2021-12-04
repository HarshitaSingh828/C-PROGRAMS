#include <stdio.h>
int main()
{
    int span(int[]a);
    int Max(int[]a);
    int Min(int[] a);
    int n;
    printf("Enter n");
    scanf("%d", n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int Span = span(a);
    printf("%d", Span);

}
 int span(int[]a){
        int max = Max(a);
        int min= Min(a);
        int span= max-min;
    
    return span;
}
 int Max(int[]a){
     int max = a[0];
     for(int i =1; i <a.length; i++){
         if(max < a[i]){
             max = a[i];
         }
     }
     return max;
}
int Min(int[]a){
     int min = a[0];
     for(int i =1; i <a.length; i++){
         if(min > a[i]){
             min = a[i];
         }
     }
     return min;
}