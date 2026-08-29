//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
//Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,root1,root2;
    printf("Enter the value of a b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\n",root1);
        printf("Root2 = %.2f\n",root2);
    }
    else if(d==0)
    {
       root1=-b/(2*a);
       printf("Root are real and equal\n");
       printf("Root1 = Root2 = %.2f\n",root1); 
    }
    else{
        printf("Root are complex (imaginary)\n");
    }
    float per;
    printf("Enter the percentage");
    scanf("%f",&per);
    if(per>=90 && per<=100)
    printf("you have attained A grade\n");
    else if(per>=80 && per<=89)
    printf("You have attained B grade\n");
    else if(per>=70 && per<=79)
    printf("You have attained C grade\n");
    else if(per>=60 && per<=69)
    printf("You have attained D grade\n");
    else if(per>=0 && per<=59)
    printf("You have attained F grade\n");
    else
    printf("The enter percentage cannot be consider\n");
    return 0;
}