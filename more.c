#include<stdio.h>

int main(){ 
    int year; 
    printf("Enter the Year to check "); 
    scanf("%d" , &year); 
    if(year % 4 == 0 && year % 100 !=0 || year %400 == 0 ){  
        printf("They Year is Leap Year");
    }else{
    printf("They Year is not Leap Year");
      }
        return 0 ; 
}

// Check if a number is even or odd
int checkEvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    return 0;
}

// Find the factorial of a number
int findFactorial() {
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }
    printf("Factorial of %d = %llu\n", num, factorial);
    return 0;
}

// Check if a number is prime
int checkPrime() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("The number is not prime\n");
        return 0;
    }
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }
    return 0;
}

 

// Check weather a number is divisible by 97 or not 
int checkDivisibleBy97() {
    int num;
    printf("Enter any number ");
    scanf("%d", &num);
    if (num % 97 == 0) {
        printf("The number is divisible by 97\n");
    } else {
        printf("The number is not divisible by 97\n");
    }
    return 0;
}

