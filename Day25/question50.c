//Q50: Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include<stdio.h>
int main(){
    char a;
    int i,j;
    for(int i=1;i<=5;i++)
    {
                for(int j=1;j<=i;j++)
        {
        printf(" ");
    }
        for(int j=i;j<=5;j++)
        {
        printf("*");
    }
    printf("\n");
}
    return 0;
}