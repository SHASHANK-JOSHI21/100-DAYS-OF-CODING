//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible");
        return 0;
    }

    int a[r1][c1];
    int b[r2][c2];
    int result[r1][c2];

    printf("Enter first matrix:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                result[i][j] =
                    result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of matrices:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}