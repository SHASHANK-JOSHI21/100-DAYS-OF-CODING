//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main()
{
    char a[100];
    int i;

    printf("Enter string: ");
    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++)
    {
        printf("%c\n", a[i]);
    }

    return 0;
}