//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];
    int sum[row];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        sum[i] = 0;

        for(int j = 0; j < col; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(int i = 0; i < row; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}