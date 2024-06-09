#include <stdio.h>
#include <stdlib.h>


int main() {
    int *ptr;
    int n = 5;

    //allocating memory for 5 integers
    ptr = (int *)malloc(n*sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // assign values and print
    for (int i = 0; i <n; i++) {
        ptr[i] = i + 1;
        printf("Element %d: %d\n",i,ptr[i]);

    }

    //deallocate memory
    free(ptr);

    return 0;
    
}