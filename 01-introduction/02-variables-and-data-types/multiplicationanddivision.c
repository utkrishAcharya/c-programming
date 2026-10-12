#include<stdio.h>
int main (){
    int a, b, division, multiplication;
    printf("Enter a first number:");
    scanf("%d", &a);
    printf("Enter a second number:");
    scanf("%d", &b);
division = a / b;
multiplication = a*b;
printf("\n Division of a and b : %d\n", division);

printf("\n Multiplication of a and b : %d\n", multiplication);
return 0;

}