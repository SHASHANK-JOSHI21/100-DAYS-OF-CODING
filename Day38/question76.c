//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main()
{
    int n;
    int symmetric = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}