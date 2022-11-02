#include <stdio.h>

int main() {

    double number1, number2, temp;

    printf("\n\nEnter number1 : ");
    scanf("%lf", &number1);

    printf("\n\nEnter number2 : ");
    scanf("%lf", &number2);

    printf("\n\nnumber1 is %lf", number1);
    printf("\n\nnumber2 is %lf", number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("\n\nValues changed");

    printf("\n\nnumber1 is %.2lf", number1);
    printf("\n\nnumber2 is %.2lf\n\n", number2);

    return 0;




    
}