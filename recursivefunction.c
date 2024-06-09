//get to know about recursive function

#include<stdio.h> 


int recursion(int n);

int main() {
    int number = 5;
    printf("The factorial of %d is %d",number,recursion(number));
}

int recursion(int n) {
    if ( n == 0) {
        return 1;
    }
    else {
        return n*recursion(n-1);
    }
}




