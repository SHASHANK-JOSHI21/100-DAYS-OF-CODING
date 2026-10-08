//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int i, flag = 0;
    printf("Enter the number");
    scanf("%99s", a);

    int n = strlen(a);

    for(i = 0; i < n / 2; i++) {
        if(a[i] != a[n - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}