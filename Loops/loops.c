#include<stdio.h> 

int main(){ 
    int i = 0; 
    int a = 1 ; 
        int num; 
//    while ((a < 10))
//    {
//      printf("The Number now is %d \n" , a );
//      a++;
//    }; 

//    for(a = 0 ; a <10 ; a++ ){ 
//     printf("The Number now is %d \n" , a );

//    }


printf("Enter the Number "); 
scanf("%d" , &num); 
    // while(i<=10) {
    //   printf("The Number now is %d \n" , i+10 );
    //   i++;
    // }

// to Print First natural number in do while loop 
 

// do
// { 

// printf("The Number now is %d \n" , a );
//    a++;
// } while(a<=num); 


// for(a=1 ; a<=num ; a++){ 
//     printf("The Number now is %d \n" , a );
 
// }

// to Print n Natural Number in reverese order 

// for (a = num ; a >= 1 ; a--){ 
//     printf("The Number now is %d \n" , a );
// }


// to Print the multiplication table of given number n ; 
// for(a = 1 ; a <=10 ; a ++ ){ 
//     printf("Num %d * %d = %d \n" , num , a , num*a); 
// }
// }

// to print multiplication table of given number n in reverse order 

// for (a = 10 ; a >= 1 ; a--){ 
//     printf("Num %d * %d = %d \n" , num , a , num*a);
// }

// to sum First ten natural number using while loop 

int sum = 0;
// while ((a <= 10)) {
//     sum += a;
//     printf("The Number now is %d \n", a);
//     a++;
// }
// printf("The Sum of First ten natural number is %d \n", sum);


// to sum First ten natural number using for loop
// for(a = 1 ; a<=10 ; a++){ 
//     sum +=a ; 
//     printf("The Number now is %d \n" , a );

// }
//  printf("THe sum is %d \n" , sum);

// }

// to sum First ten natural number using do while loop
// do{ 
//     sum += a; 
//     printf("The Number now is %d \n" , a );
//     a++; 
// }while(a <=10); 
// printf("The sum is %d \n" , sum); 

for(a = 1 ; a <=10 ; a++){ 
    int b = 8 ; 
    int numbers = 0 ; 
    numbers = a * b ; 
    printf("Num %d * %d = %d \n" , a , b , numbers);
    sum += numbers ; 
}
printf("the sum is %d" , sum);

}