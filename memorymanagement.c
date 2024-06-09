//includes allocation, deallocation, and management of memory resources used by a program.
/*
malloc = allocates a specified number of bytes and returns a pointer to the allocated memory
calloc = allocates memory for an array of elements.
realloc = changes the size of the previously allocated memory block.
free = deallocates the memory
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    int *ptr;

    printf("enter number of elements: ");
    scanf("%d",&n);

    //dynamically allocate memory using malloc
    ptr = (int *)malloc(n * sizeof(n));

    //check if memory has been allocated successfully
    if (ptr == NULL) {
        printf("Memory allocation Failed!\n");
        return 1;
    }

    //Get elements from the user
    for (i = 0; i<n; i++) {
        printf("Enter Element %d: ",i+1);
        scanf("%d",ptr+i);
    }

    //print elements
    printf("Elements in the array are: ");
    for (i=0; i<n; i++) {
        printf("%d",*(ptr+i));
    }
    printf("\n");

    //deallocate memory
    free(ptr);

    return 0;
}

//Check this key features

/*
Common memory management issues
1) Memory Leaks
2) Dangling Pointers
3) Double free
4) Invalid memory access
*/