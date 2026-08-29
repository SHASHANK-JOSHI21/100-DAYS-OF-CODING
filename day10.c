//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.



#include<stdio.h>
int main (){
    int x;
    printf("Enter the number from (1-7) to display the day of week\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1 :
        printf("Sunday\n");
        break;
        case 2 :
        printf("Monday\n");
        break;
        case 3 :
        printf("Tuesday\n");
        break;
        case 4 :
        printf("Wednesday\n");
        break;
        case 5 :
        printf("Thursday\n");
        break;
        case 6 :
        printf("Friday\n");
        break;
        case 7 :
        printf("Saturday\n");
        break;
        }
    int a,b,c;
    printf("Enter the side of the triangle a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
    printf("The triangle is equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("The triangle is isosceles");
    }
    else{
        printf("The triangle is scalene");
    }
    return 0;
}