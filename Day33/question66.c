//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int n, element, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the elements of sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find correct position
    pos = n;

    for (int i = 0; i < n; i++)
    {
        if (element < arr[i])
        {
            pos = i;
            break;
        }
    }

    // Shift elements towards right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}