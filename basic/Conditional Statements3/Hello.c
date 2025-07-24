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
    
    int number;
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("even");
    }
    else {
        printf("odd");
    }
    
    
    // Conditional Operators ===> Ternary   ---> Condition?doSomething if TRUE: doSomething if FALSE;
    
    // int age;
    // printf("Enter age : ");
    // scanf("%d", &age);
    // age >= 18 ? printf("adult \n") : printf("not adult \n");
    // int number = 7;
    // int luckyNumber = 7;
    // number == luckyNumber ? printf("you are lucky \n") : printf("you are not lucky \n");
    
    
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
    char day = 'f';
    switch(day) {
        case 'm' : printf("monday \n");
            break;
        case 't' : printf("tuesday \n");
            break;
        case 'w' : printf("wednesday \n");
            break;
        case 'T' : printf("thursday \n");
            break;
        case 'f' : printf("friday \n");
            break;
        case 's' : printf("saturday \n");
            break;
        case 'S' : printf("sunday \n");
            break;
        default: printf("not a valid day! \n");
        
    }    
        
    // switch Properties
    // a. Cases can be in any order
    // b. Nested switch (switch inside switch) are allowed
    
    
    int number;
    printf("enter number: ");
    scanf("%d", &number);
    
    if(number >= 0){
        printf("positive \n");
        if(number % 2 == 0){
            printf("even \n");
        }
        else{
            printf("odd \n");
        }
    }
    else{
        printf("negative \n");
    }
        
        
    return 0;
        
}