//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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

    printf("Enter matrix elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(int k = 0; k < row + col - 1; k++)
    {
        for(int i = 0; i < row; i++)
        {
            int j = k - i;

            if(j >= 0 && j < col)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}