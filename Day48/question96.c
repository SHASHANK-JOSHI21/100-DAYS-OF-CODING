//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, start, end, j;
    char temp;

    printf("Enter the sentence: ");
    scanf(" %[^\n]", str);

    start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            for(j = start; j < end; j++)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;

                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("After reversing: %s", str);

    return 0;
}