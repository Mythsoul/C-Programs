#include<stdio.h> 

int main(){ 
    int a = 10 ; 
    int *b = &a ; 
    printf("The value of a is %d" , a);
    printf("The address of a is %p" , (void*)&a);
    printf("The address of b is %p" , (void*)b);
    printf(" b + 1 %p", (void*)(b+1));
    printf("The value of b is %d" , *b);
    printf("The value of b is %d" , *(b+1));
    return 0;
}


/*
    int c = 20 ; 
    int *d = &c ; 
    printf("The value of c is %d" , c);
    printf("The address of c is %p" , (void*)&c);
    printf("The address of d is %p" , (void*)d);
    printf("The value of d is %d" , *d);

    int e[5] = {1,2,3,4,5}; 
    int *f = e ; 
    printf("The value of e[0] is %d" , e[0]);
    printf("The value of f is %d" , *f);
    printf("The value of *(f+1) is %d" , *(f+1));
    printf("The value of *(f+2) is %d" , *(f+2));
    printf("The value of *(f+3) is %d" , *(f+3));
    printf("The value of *(f+4) is %d" , *(f+4));

    int g = 10 ; 
    int *h = &g ; 
    int **i = &h ; 
    printf("The value of g is %d" , g);
    printf("The address of g is %p" , (void*)&g);
    printf("The address of h is %p" , (void*)h);
    printf("The value of h is %d" , *h);
    printf("The address of i is %p" , (void*)i);
    printf("The value of i is %p" , (void*)*i);
    printf("The value of **i is %d" , **i);

*/
