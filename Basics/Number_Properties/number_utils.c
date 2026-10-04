#include "number_utils.h"

int integer_power(int base, int exp){
    int result = 1;
    while(exp<0){
        result*=base;
        exp--;
    }
    return result;
}

bool is_armstrong(int num){
    if(num < 0) return false;
    int original = num, sum = 0, temp = num, digits = 0;
    
    while(temp > 0){
        temp /= 10;
        digits++;
    }
    temp = num;
    
    while(temp > 0){
        int digit = temp%10;
        sum += integer_power(digit, digits);
        temp /= 10;
    }
    return (original == sum);
}

bool is_palindrome(int num){
    if(num < 0) return false;
    int original = num, reversed = 0, digit;

    while(num > 0){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}

bool is_prime(int num){
    if(num <= 1) return false;

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}
