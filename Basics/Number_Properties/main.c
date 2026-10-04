#include <stdio.h>
#include "number_utils.h"

int main () {
    int num;
    printf("Enter the number which you want to be evaluated : ");

    if(scanf("%d", &num) != 1){
        printf("Invalid input");
        return 1;
    }

    printf("The evaluation of %d is : \n", num);

    if(is_armstrong(num)){
        printf("The number is Armstrong\n");
    } else{
        printf("The number is not Armstrong\n");
    }
    if(is_palindrome(num)){
        printf("The number is Palindrome\n");
    } else{
        printf("The number is not Palindrome\n");
    }
    if(is_prime(num)){
        printf("The number is Prime\n");
    } else{
        printf("The number is not Prime\n");
    }
    return 0;
}