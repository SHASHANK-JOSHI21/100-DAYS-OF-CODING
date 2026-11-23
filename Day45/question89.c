//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of %c = %d", ch, count);

    return 0;
}