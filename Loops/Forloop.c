// 1. Write a program that uses a for loop to print the first 10 natural numbers.

// 2. Create a for loop that calculates the sum of all even numbers between 1 and 50.

// 3. Use a for loop to reverse a given string and print the reversed string.

// 4. Write a program that uses a for loop to find the factorial of a number entered by the user.

// 5. Implement a for loop to print the multiplication table of a given number up to 10.

#include<stdio.h> 
#include<math.h>
#include<string.h>
int main(){ 
    int i ; 
    
    // Question NO . 1 
    // for(i = 1 ; i <= 10 ; i++ ){
    //     printf("the First ten natural numbers are : %d \n" , i );
    // }

    // Question NO . 2 
    int sum = 0 ;   
    for (i=1 ; i <=50 ; i++){  
        if ( i % 2 == 0 ){ 
            sum += i ;
        }else{ 
            continue ;  
        }
        printf("the sum of all even numbers between 1 and 50 : %d \n" , sum );
    }
 // Question no. 3 
    char name ;     
    printf("Enter your name : ");
    scanf("%s" , &name);
    int j = 0 ; 
    for (i = strlen(name)-1 ; i >= 0 ; i-- ){
        printf("%c" , name[i]);
    }

// Question no. 4 
    int num , fact = 1 ; 
    printf("Enter a number to find its factorial : ");
    scanf("%d" , &num);
    for (i = 1 ; i <= num ; i++ ){
        fact *= i;
    }

// Question no .5  

    printf("Enter a number to print its multiplication table : ");
    scanf("%d" , &num);
    for (i = 1 ; i <= 10 ; i++ ){
        printf("%d * %d = %d \n" , num , i , num * i );
    }   

    return 0;
}