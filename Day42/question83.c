//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int v = 0, c = 0;
    printf("Enter the  character");
    scanf("%99s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(strchr("aeiouAEIOU", s[i]))
            v++;
        else if((s[i]>='a' && s[i]<='z') ||
                (s[i]>='A' && s[i]<='Z'))
            c++;
    }

    printf("Vowels=%d, Consonants=%d", v, c);

    return 0;
}