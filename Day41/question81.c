//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/ 
#include <stdio.h>

int main()
{
    char a[100];
    int i;

    printf("Enter string: ");
    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++);

    printf("Length = %d", i);

    return 0;
}