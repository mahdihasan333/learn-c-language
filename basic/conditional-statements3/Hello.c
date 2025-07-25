#include <stdio.h>
#include <math.h>

int main()
{
    // 1. If-else
    // int age = 19;
    // if(age >= 18) {
        // printf("you are an adult");
    // }
    // else {
   //      printf("you are not an adult");
   //  }
    
    
    // int age;
    // printf("enter age: ");
    // scanf("%d", &age);
    
    // if(age > 18){
    //     printf("adult \n");
    //     printf("they can vote \n");
    //     printf("they can drive \n");
    // }
    // else{
    //     printf("not adult \n");
    // }
    
    // printf("thank you!")
    
    
    
    // > Use of else if
    // int age;
    // printf("enter age: ");
    // scanf("%d", &age);
    
    // if(age >= 18){
    //     printf("adult \n");
    // }
    // else if(age < 13 && age < 18){
    //     printf("teenager \n");
    // }
    // else{
    //     printf("Child");
    // }
    
    
    // > check if a number is odd or even
    
    // int number;
    // scanf("%d", &number);
    // if(number % 2 == 0) {
    //     printf("even");
    // }
    // else {
    //     printf("odd");
    // }
    
    
    // Conditional Operators ===> Ternary   ---> Condition?doSomething if TRUE: doSomething if FALSE;
    
    // int age;
    // printf("Enter age : ");
    // scanf("%d", &age);
    // age >= 18 ? printf("adult \n") : printf("not adult \n");
    // int number = 7;
    // int luckyNumber = 7;
    // number == luckyNumber ? printf("you are lucky \n") : printf("you are notlucky \n");
    
    
    // Conditional Operators ===> switch
    // switch(number){
        // case C1: // do something
            // break;
        // case C2: // do something
            // break;
        // default: // do something
    // }
    
    
    
    // int day = 5;
    // int day;
    // printf("enter day(1-7): ");
    // scanf("%d", &day);
    // switch(day) {
        // case 1 : printf("monday \n");
            // break;
        // case 2 : printf("tuesday \n");
            // break;
        // case 3 : printf("wednesday \n");
            // break;
        // case 4 : printf("thursday \n");
            // break;
        // case 5 : printf("friday \n");
            // break;
        // case 6 : printf("saturday \n");
            // break;
        // case 7 : printf("sunday \n");
            // break;
        // default: printf("not a valid day! \n");
    // 
    
    // }
    
    
    // Switch (character)
    // char day = 'f';
    // switch(day) {
    //     case 'm' : printf("monday \n");
    //         break;
    //     case 't' : printf("tuesday \n");
    //         break;
    //     case 'w' : printf("wednesday \n");
    //         break;
    //     case 'T' : printf("thursday \n");
    //         break;
    //     case 'f' : printf("friday \n");
    //         break;
    //     case 's' : printf("saturday \n");
    //         break;
    //     case 'S' : printf("sunday \n");
    //         break;
    //     default: printf("not a valid day! \n");
    //     
    // }    
        
    // switch Properties
    // a. Cases can be in any order
    // b. Nested switch (switch inside switch) are allowed
    
    
    // int number;
    // printf("enter number: ");
    // scanf("%d", &number);
    
    // if(number >= 0){
    //     printf("positive \n");
    //     if(number % 2 == 0){
    //         printf("even \n");
    //     }
    //     else{
    //         printf("odd \n");
    //     }
    // }
    // else{
    //     printf("negative \n")
    // }
    
    
    // Practice Question 9 ===> Write a program to check if a student passed or failed.
    // marks >= 30 is PASS  === marks <= 30 is FAIL
    
    // int marks;
    // printf("enter number (0-100): ");
    // scanf("%d", &marks);
    
    // if(marks >= 30 && marks <= 30){
    //     printf("FAIL \n);
    // }
    // else if(marks > 30) && marks <= 100{
    //     printf("PASS \n");
    // }
    // else{
    //     print("Wrong Answer")
    // }
    
    
    // marks <= 30 ? printf("FAIL \n") : printf("PASS \n")
    
    
    
    // Practice Question 10 ===> Write a program to give grades to a student
    // marks < 30 is C  => 30 <= marks < 70 is B     => 70 <= marks < 90 is A   => 90 <= marks <= 100 is A+
    
    // int marks;
    // printf("enter number (0-100): ");
    // scanf("%d", &marks);
    
    // if(marks < 30){
    //     printf("C \n");
    // }
    // else if(marks >= 30 && marks < 70){
    //     printf("B \n");
    // }
    // else if(marks >= 70 && marks < 90){
    //     printf("A \n");
    // }
    // else{
    //     printf("A+ \n");
    // }
    
    
    
    // Practice Question 11 ===> Will this code:
    // a. give error       b. print "x is equal to 1"✅      c. print "x is not equal to 1"
    
    int x = 2;
    if(x = 1){
        printf("x is equal to 1 \n");
        printf("%d \n", x);
    }
    else{
        printf("x is not equal to 1");
    };
    
    // Practice Question 12 ===> Write a program to find if a character entered by user is upper case or not.
    
    
    char ch;
    printf("enter character : ");
    scanf("%c", &ch);
    
    
    if(ch >= "A" && ch <= "Z"){
        printf("upper case \n");
    }
    else if(ch >= "a" && ch <= "z"){
        printf("lower case \n");
    }else{
        printf("not english leter \n");
    };
    
    
    return 0;
        
}