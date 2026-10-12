#include <stdio.h>

int main(void) {
   // printf("Hello, World!\n");
   int Length, Breadth, Area;
   printf("Enter the Length: ");
    scanf("%d", &Length);
    printf("Enter the Breadth: ");
    scanf("%d", &Breadth);
    Area = Length * Breadth;
    printf("Area of Rectangle: %d", Area);

    return 0;
}
