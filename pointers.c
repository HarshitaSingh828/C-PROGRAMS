// #include<stdio.h>

// int main()
// {
// 	int x=5;
// 	int *a =&x;

// 	printf("%d\n",&x );
// 	printf("%d",a );
// 	return 0;
// }

// #include<stdio.h>

// int main()
// {
// 	int a=5;

// 	printf("%d\n",&a );
// 	printf("%d",a );
// 	return 0;
// }

// #include<stdio.h>

// int main()
// {
// 	printf("Pointer Basics\n");
// 	int a =5;
// 	int *p=NULL;

// 	printf("%d\n", p);

// 	return 0;
// }

#include <stdio.h>

// int main()
// {
// 	printf("Pointer Basics\n");
// 	int a =76;
// 	int* ptra=&a
// 	int* ptr2= NULL;

// 	printf("The Address of pointer is %p\n", &ptra );
// 	printf("The Address of a is %p\n," &a);
// 	printf("The Address of a is %p\n",ptra );
// 	printf("The Address of some garbage is %p\n",ptr2);
// 	printf("The Value of a is %d\n", *ptra );
// 	printf("The Value of a is %d\n", *a );
// 	return 0;
// }

int main()
{
    int a = 5;
    int *p = &a;
    printf("%p\n", &p); //address of p
    printf("%p\n", &a); //address of a
    printf("%d\n", *p); // value of p
    printf("%d\n", a);  //value of a
}