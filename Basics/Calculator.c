#include <stdio.h>

int main () {
    char Operator;
    double num1, num2, result;

    printf("Enter the Operator you want to use (+,-,*,/) : ");
    scanf("%c", &Operator);

    printf("Enter first Number : ");
    scanf("%lf", &num1);

    printf("Enter second Number : ");
    scanf("%lf", &num2);

    switch(Operator){
        case '+':
        result = num1+num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '-':
        result = num1-num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '*':
        result = num1*num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '/':
        if(num2 != 0.00){
            result = num1/num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }else {
            printf("Division by 0 is not allowed\n");
        }
        break;
        default:
        printf("Error inavlid operator inputted\n");
    }
    return 0;
}