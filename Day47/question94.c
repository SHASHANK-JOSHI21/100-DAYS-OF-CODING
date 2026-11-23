//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int count = 0;
    int max = 0;
    int end = 0;

    printf("Enter the sentence: ");
    scanf(" %[^\n]", str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
                end = i - 1;
            }

            count = 0;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("Longest word: ");

    for(i = end - max + 1; i <= end; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength = %d", max);

    return 0;
}