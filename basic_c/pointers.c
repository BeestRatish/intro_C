#include <stdio.h>

int main() {

    int var = 10;
    int *ptr = &var;

    printf("Address of var: %p\n",&var); //prints memory address
    printf("Pointer ptr holds: %p\n",ptr);//prints memory address
    printf("value pointed by ptr: %d\n",*ptr);//prints 10 <= var
    
//Pointer Arithmetic
    int arr[]={10,20,30,40,50};
    int *ptr1 = arr;
    printf("First Element: %d\n",*ptr1);
    ptr1++;
    printf("second Element: %d\n",*ptr1);    

//pointers and array
    int arr1[]={1,2,3,4,5};
    int *ptr2 = arr1;

    for (int i=0;i<5;i++) {
        printf("Element %d: %d\n",i,*(ptr2 +i));
    }

//pointers to pointers
    int var2 = 100;
    int *ptr3 = &var2;
    int **ptr4 = &ptr3;

    printf("value of var: %d\n",var2);
    printf("value pointed by ptr: %d\n",*ptr3);
    printf("value pointed by pptr: %d\n",**ptr4);


    return 0;
}