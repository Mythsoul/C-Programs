#include<stdio.h> 

/* int main(){ 
    int a ; 
    a = 930 ; 

    a = 10 ? printf("The value of a is %d" , a) : printf("The value of a is not %d" , a) ;

    return 0; 
}

*/ 

// To find the grade of a student based on marks 

/* int main(){ 
    int marks ; 
    printf("Enter the marks of the student"); 
    scanf("%d" , &marks ); 
     switch (marks)
     {
     case 90 ... 100:
        printf("The student got A grade");
        break;
     case 80 ... 89: 
     printf("The student got B grade");
     break;
     case 70 ... 79: 
     printf("The student got C grade");
     break; 
     case 60 ... 69: 
      printf("The student got D grade");
      break;
      case 1 ... 59:
      printf("U are Useless");
      break;
     default:
        printf("Please enter marks betn 1 to 100");
        break;
     }

return 0 ; }
*/ 

#include<stdio.h>

int main(){ 
    int a, b, c; 
    printf("Enter Marks of three Subjects: ");
    scanf("%d %d %d", &a, &b, &c); 

    int totalMarks = a + b + c;
    float percentage = (float)totalMarks / 300 * 100; 

    printf("Percentage: %f \n", percentage);

    if (percentage > 40) {   
        printf("The Student Passed\n"); 
    } else { 
        printf("The Student Failed\n"); 
    }

    return 0;
}

