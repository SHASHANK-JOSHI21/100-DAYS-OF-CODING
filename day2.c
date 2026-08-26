//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
///Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define PI=3.14

int main(){
    int length, breadth;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Area=%d, Perimeter=%d", length*breadth, 2*(length+breadth));
     float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area=%.2f, Circumference=%.2f", PI*radius*radius, 2*PI*radius);
    return 0;
}