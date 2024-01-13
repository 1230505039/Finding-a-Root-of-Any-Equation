#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float first_number;
    float second_number;
    float fixed_number;

    printf("Enter the first number: ");
    scanf("%f", &first_number);
    printf("Enter the second number: ");
    scanf("%f", &second_number);
    printf("Enter the fixed number: ");
    scanf("%f", &fixed_number);

    float delta;

    delta = pow(second_number, 2) - 4*(first_number)*(fixed_number);

    float x1, x2;

    if(delta >= 0){
        x1 = ((-1*second_number) - sqrt(delta)) / 2*first_number;
        x2 = ((-1*second_number) + sqrt(delta)) / 2*first_number;
        printf("x1 = %.2f  x2 = %.2f", x1, x2);

    }
    else{
        printf("There is no real root!\n\n");
        x1 = ((-1*second_number) - sqrt(-1*delta)) / 2*first_number;
        x2 = ((-1*second_number) + sqrt(-1*delta)) / 2*first_number;
        printf("x1 = %.2fi  x2 = %.2fi", x1, x2);
    }
    return 0;
}