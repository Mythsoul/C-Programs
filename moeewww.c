#include<stdio.h> 
#include<stdbool.h>
// bool uaf(int age){    
//   return age >=18 ; // acha  age >=18  isko check karega 
// }

// // ab hua 

// int main(){  
//     int age;
//     printf("Enter Your age :  "); 
//     scanf("%d" , &age); 
// if(uaf(age)){ 
//    printf("U are allowed to go to pornhub.com/japnees");
// }else{ 
//     printf("Na bro backoff");
//     // this is c class 
// }
//     return 0; 
// }

//called uaf 
// lund idea tha 

// Ab konsa program 

// firse bolna disconnect hogaya 
// to : Take input from a user (int type) 
// to : make a void function to change its value by half (value / 2 )
// normal hi to h : D 

void change(long long int* value){ 
   long long int num = (*value)/2; 
   *value = num; 
}

 int main(){ 
  long long int value; 
  printf("Enter Your Number"); 
  scanf("%d" , &value); 
  change(&value);
  printf("The number is %d" , value); 
}
 // hm 
 

// ab kya banau 

 
