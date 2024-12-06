#include<stdio.h>

// // To find the area of rectangle using input supplied from user
// int main(){ 
//     int a , b  , area;
//     printf("ENTER LENGTH AND BREADTH OF RECTANGLE \n ");
//     scanf("%d %d" , &a , &b); 
//      area =  a * b ;
//      printf("The area of rectangle is %d" , area);

// }
//To Find the area of rectanfle using hard coded input

// int main(){
//     int a = 10 , b = 5 , area;
//     area = a * b;
//     printf("The area of rectangle is %d" , area);
//     return 0;    
//} 

//


// To calculate the area of circle and modify the same program to find the volume of cyclinder

/* int main(){
    float r , area , volume;
    printf("Enter the radius of the circle");
    scanf("%f" , &r);
    area = 3.14 * r * r;
    volume = 3.14 * r * r * r;
    printf("The area of the circle is %f" , area);
    printf("The volume of the circle is %f" , volume);  
    return 0;
} */

// To convert celcius to fahrenheit 

 /* int main(){ 
    float c , f; 
    printf("Enter the temperature in celcius");
    scanf("%f" , &c);
    f = (c * 1.8) + 32;
    printf("The temperature in fahrenheit is %f" , f);
    return 0;
 } */

// to check weather a number is divisible by 97 or not 

// int main(){ 
//     int a ; 
//     printf("Enter the number to check of it is divisible by 97 or not");
//     scanf("%d" , &a); 
//     if(a % 97 == 0){
//         printf("The number is divisible by 97");

//     }
//     else{ 
//         printf("The number is not divisible by 97");
//     }
// } 


// To check if the number is divisible by any number 

int main(){ 
    int a, num ; 
   printf("Enter the Number to check"); 
   scanf("%d" , &a ); 
   printf("Enter to number which is divider of %d" , a); 
   scanf("%d" , &num);
   if(a % num == 0){
       printf("The number is divisible by %d" , num);
   }
   else{ 
       printf("The number is not divisible by %d" , num);
   }
} 