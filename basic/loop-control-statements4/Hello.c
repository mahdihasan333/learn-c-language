#include <stdio.h>
#include <math.h>

int main()
{
    // Loop Control Instructions    => To repeat some parts of the program  -> Types    --->    1. 1. for        2. while        3. do while
    
    // 1. Syntax of 3 Loops
    // for Loop
    // for(initialisation; condition; updation){
        // do something
    //}
    
    // iterator: conter
    // for(int i=1; i<=100; i++) {
    //     printf("%d\n", i);
    // }
    
    //while loop
    // int i=1;
    // while(i<=100) {printf("%d\n", i);i++;}
    
    //do while loop
    // i = 1;
    // do {
    // printf("%d\n", i);i++;} while(i<=100);
    
    
    // Practice Question 13 ===> Print the numbers form 0 to 10
    // for(int i=0; i<=10; i++){
    //     printf("%d \n", i);
    // };
    
    // increment operator       ===> ++i(pre increment Operator), i++(post increment Operator)
    // int i=1;
    // printf("%d \n", i++);       // use, then increase
    // printf("%d \n", i);  
    
    // printf("%d \n", ++i);       // increase, then use
    // printf("%d \n", i); 
    
    
     // decrement operator       ===> --i(pre decrement Operator), i--(post decrement Operator)
    // int i=1;
    // printf("%d \n", i--);       // use, then decrease
    // printf("%d \n", i);  
    
    // printf("%d \n", --i);       // decrease, then use
    // printf("%d \n", i);
    
    
    
    // Special things
    
    // Loop counter can be float or even character
    // for(float i=1.0; i<=5.0; i++){
    //     printf("%f \n", i);
    // };
    

    // for(char ch = 'a'; ch<='z'; ch++){
    //     printf("%c \n", ch);
    // };
    
    // infinite loop 
    // for(int i=1; ;i++){
    //     printf("do not try!")
    // }
    
    
    // While Loop
    // while(condition){
    //     // do someting
    // }
    
    // int i = 1;
    // while(i <= 5){
    //     printf("Hello World! \n");
    //     i++;
    // }
    
    // Practice Question 14 ===> Print the numbers from 0 to n, if n is given by user ---> n=4
    
    // int a;
    // printf("enter a number: ");
    // scanf("%d", &a);
    
    // int i = 1;
    // while(i <= a){
    //     printf("%d \n", i);
    //     i++;
    // }
    
    // for(int i = 0; i <= a; i++){
    //     printf("%d \n", i);
    // }
    
    
    // do while loop
    // do{
    //     //do something
    // }while(condition)
    
    // int i = 1;
    // do{
    //     printf("%d \n", i);
    //     i++;
    // }while(i <=5);
    
    // Practice Question 15 ===> Print the sum of First n natural numbers. ---> n = 4   --> also, print them in reverse.
    
    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);
    
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     sum +=i;
    // }
    // printf("sum is %d \n", sum);
    
    // for(int i = n; i >= 1; i--){
    //     printf("%d \n", i);
    // }
    
    
    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);
    
    // int sum = 0;
    // for(int i = 1, j=n; i<=n && j>=1; i++, j--){
    //     sum +=i;
    //     printf("%d \n", j);
    // }
    // printf("sum is %d \n", sum);
    
    
    // Practice Question 16 ===> Print the table of a number input by the user. ---> n=2
    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);
    // for(int i=1; i<=10; i++){
    //     printf("%d \n", n*i);
    // }
    
    
    // break Statement ==> exit the loop
    // for(int i =1; i <=5; i++){
    //     if(i == 3){
    //         break;
    //     }
    //     printf("%d \n", i);
    // }
    // printf("end");
    
    
    // Practice Question 17 ===> Keep taking numbers as input from user until user enters an odd number.
    int n;
    do {
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0){
            break;
        }
    } while(1);
    printf("thank you!");
    
    // Practice Question 18 ===> Keep taking numbers as input from user until user enters a number which is multiple of 7.
    
    
    return 0;
        
}