//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col];
    int b[row][col];
    int sum[row][col];

    printf("Enter first matrix:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}