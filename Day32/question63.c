//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n1, n2;

    // Array 1
    printf("Enter the size of Array 1: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter the elements of Array 1:\n");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Array 2
    printf("Enter the size of Array 2: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter the elements of Array 2:\n");
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge
    int merge[n1 + n2];

    for(int i = 0; i < n1; i++)
    {
        merge[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        merge[n1 + i] = arr2[i];
    }

    // Output
    printf("Merged Array:\n");

    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}