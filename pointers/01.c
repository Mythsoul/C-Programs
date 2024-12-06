#include<stdio.h> 

int main(){ 
    int a = 10 ; 
    int *b = &a ; 
    printf("The value of a is %d" , a); 
    printf(" b + 1 %d", b+1 );
    printf("The value of b is %d" , *b); 
    return 0;
}