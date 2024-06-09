/*
C file handling functions
fopen:opens a file and returns a file pointer
fclose: closes an opened file
fgetc: reads a character from a file
fputc: writes a character to a file
fgets: reads a string from a file
fputs: writes a string to a file
fscanf: reads formatted input from a file
fprintf: writes formatted output to a file
fread: reads a block of data from a file
fwrite: writes a block of data to a file.
feof:checks if the end of the file has been reached.
ferror: checks for a file error.
r: open file for read
w: open file for write
a: open a file for appending
r+: open file for both read and write. file must be preexisted
w+: open file for both read and write. if file exists, its contents are destroyed. if not, a new file is created.
a+: open file for both read and write. if file not exist, a new file is created.
*/

#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    FILE *file;
    struct Person person = {"John", 30};

    file = fopen("person.txt", "wb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fwrite(&person, sizeof(struct Person), 1, file);
    fclose(file);

    file = fopen("person.txt", "rb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fread(&person, sizeof(struct Person), 1, file);
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    fclose(file);
    return 0;
}
