/********************************************************************************
Pointer:  pointer is special types of variable which stores the address of another variable.

*********************************************************************************/

#include<stdio.h>
#include<stdlib.h>

// int main() {
//     int a = 20; // data variable
//     int *z = &a; // pointer variable or address varible
//     printf("Value of a: %d\n", a);
//     printf("Value of *z: %d\n", *z); // deferencing the pointer *var_name

//     int var = 10;
//     printf("%d\n",&var);
//     printf("%d\n",&var+1);

//     int x = 10;
//     int *ptr = &x;
//     printf("Value of x: %d\n", x);
//     printf("Value of ptr: %d\n", ptr);


-

















































































//     printf("Value of *ptr: %d\n", *ptr);
//     printf("Address of ptr: %d\n", &ptr);

//     return 0;
// }


int main() {

    int *pnum;
    float *pfnum;
    char *pchar;
    double *pdnum;
    long plnum;

    printf("\n Size of integer pointer variable: %d bytes", sizeof(pnum));
    printf("\n Size of float pointer variable: %d bytes", sizeof(pfnum));
    printf("\n Size of character pointer variable: %d bytes", sizeof(pchar));
    printf("\n Size of double pointer variable: %d bytes", sizeof(pdnum));
    printf("\n Size of long pointer variable: %d bytes", sizeof(plnum));

    return 0;
}
