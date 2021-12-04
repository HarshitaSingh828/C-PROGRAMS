# include <stdio.h>

// int main(){
//     int length, breadth;
//     printf("Enter length of rectangle\n");
//     scanf("%d",&length);
//     printf("Enter breadth of rectangle\n");
//     scanf("%d",&breadth);
//     printf("The area of the rectangle is %d",length*breadth);
   
//     return 0;
// }
int main(){
    float radius,height,pi;
    printf("Enter the value of pi \n");
    scanf("%f",pi);
    printf("Enter the radius of cylinder \n");
    scanf("%f",radius);
    printf("Enter the height of cylinder \n");
    scanf("%f",height);
    printf("The volume of cylinder is %f", pi*radius*radius*height);
    return 0;
}