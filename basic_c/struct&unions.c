#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1;

    // Assigning values to structure members
    p1.age = 25;
    p1.height = 5.9;
    strcpy(p1.name, "John");

    // Accessing structure members
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}
