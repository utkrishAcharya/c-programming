#include <stdio.h>
int main(){

    int Principal, Time, Rate;
    float SimpleInterest;

    printf("Enter the Principal \n:");
    scanf("%d", &Principal);

    printf("Enter the Time: \n");
    scanf("%d", &Time);

    printf("Enter the Rate: \n ");
    scanf("%d", &Rate );

    SimpleInterest = (float)Principal * Time * Rate / 100;
    printf("Simple Interest is: %f\n", SimpleInterest);
    return 0;


    
}