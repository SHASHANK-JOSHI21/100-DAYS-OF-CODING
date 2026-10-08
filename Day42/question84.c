//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO
*/\
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%99s", str);

    strupr(str);

    printf("Uppercase = %s", str);

    return 0;
}