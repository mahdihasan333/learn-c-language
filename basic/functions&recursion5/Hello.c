// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>


// function
    
// Syntax 1
// Function Prototype
// void printHello();


// Syntax 2
// Function Defination
// void printHello(){
//     printf("Hello");
// }

// Syntax 3
//Function Call
// int main(){
//     printHello();
//     return 0;
// }
    
// declaration/prototype
// void printHello();

// int main() {
//     printHello();       // function call
//     printHello();
//     printHello();
//     return 0;
// }

// //function definition
// void printHello(){
//     printf("Hello! \n");
//     printf("Mahdi hassan \n");
// }


// Practice Question 27 ===> Write 2 functions - one to print "Hello" % second to print "good bye".
// void printHello();
// void printGoodbye();

// int main(){
//     printHello();
//     printGoodbye();
//     printHello();
//     return 0;
// }

// void printHello(){
//     printf("Hello! \n");
// }

// void printGoodbye(){
//     printf("Goodbye : \n");
// }


// Practice Question 28 ===> Write a function that prints Assalamu Alikum if user is Bangladeshi & Bonjour if the user is French.
// void assalamuAlikum();
// void bonjour();
// int main(){
//     printf("enter f for french & b for bangladeshi : ");
//     char ch;
//     scanf("%c", &ch);
    
//     if(ch == 'b' || ch == 'B'){
//         assalamuAlikum();
//     }
//     else if(ch == 'f' || ch == 'F'){
//         bonjour();
//     }else{
//         printf("Please enter B or F");
//     }
    
//     return 0;
// }

// void assalamuAlikum(){
//     printf("Assalamu Alikum! \n");
// }

// void bonjour(){
//     printf("bonjour! \n");
// }

// Properties
 // - Execution always starts from main
 // - A function gets called directly or indirectly from main
 // - There can be multiple functions in program
 
// Function Types
    // Library funciton ===> Special functions inbuilt in C     --> scanf(), printf()
    // User-defined ===> declared % dfined by programmer
    
// Passing Arguments ===> funciton can take(parameter) value & give some value(return value)

// void printHello();
// void printTable(int n);
// void sum(int a, int b);


// sum of 2 funciton
// int sum (int a, int b);

// int main(){
//     int a, b;
//     printf("enter first number : ");
//     scanf("%d", &a);
//     printf("enter first number : ");
//     scanf("%d", &b);
    
//     int s = sum(a, b);
//     printf("sum is %d", sum);
    
//     return 0;
// }


// int sum(int a, int b){
//     return a + b;
// }




// void printTable (int n);
// int main(){
//     int n;
//     printf("enter first number : ");
//     scanf("%d", &n);
    
    
//     printTable(n);  //argument/actual parameter
    
//     return 0;
// }




// void printTable(int n){ //parameter/formal parameter
//     for(int i=1; i <=10; i++){
//         printf("%d \n", i * n);
//     }
// }


// Argument vs Parameter
// Argument ===> values that are passed in function call => used to send value => actual parameter

// Parameter ===> values is function declaration & definition => used to receive value => formal parameters

// Note: a. Function can only return one value at a time
// b. Changing to parameters in function don't change the values in calling function. (Because a copy of argument is passed to the function)

// void calculatePrice(float value);

// int main(){
//     float value = 100.0;
//     calculatePrice(value);
//     printf("value is : %f \n", value);
//     return 0;
// }


// void calculatePrice(float value){
//     value = value + (0.18 * value);
//     printf("final price is : %f \n", value);
// }

// Practice Question 29 ===> Use library functions to calculate the square of a number given by user.
// int main(){
//     int n = 4;
//     printf("%f", pow(n, 2));
//     return 0;
// }

// Practice Question 30 ===> Write funcitons to calculate area of square, a circle & a rectangle.

// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float a, float b);

// int main(){
//     float a = 5.0;
//     float b = 10.0;
    
//     printf("area is : %f", rectangleArea(a,b));
//     return 0;
// }


// float squareArea(float side){
//     return side * side;
// }

// float circleArea(float rad){
//     return 3.14 * rad * rad;
// }


// float rectangleArea(float a, float b){
//     return a * b;
// }


// Recursion ===> When a function calls itself, it's called recursion
// Practice Question 31 ===> Print "Hello World" 5 times.
// void printHW(int count);
// int main(){
//     printHW(5);
//     return 0;
// }

// // recursive function
// void printHW(int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello World \n");
//     printHW(count-1);
// }

// Recursion ==> Math. f(x) = x^2

// Normal Function Call 
// main --> f(x) => y(x)
// Recursion Function Call
// main --> f(x) => f(x) => f(x)

// Practice Question 32 ===> Sum of first n natural numbers.
// n -->  1 + 2 + 3 + 4 ------ n + n +

// int sum (int n);
// int main(){
//     printf("sum is : %d", sum(5));
//     return 0;
// }

// // recursive function
// int sum (int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);  //sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }


// Practice Question 33 ===> Factorial of n.

// int fact(int n);
// int main(){
//     printf("factorial is : %d", fact(6));
//     return 0;
// }

// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     int factNm1= fact(n - 1);
//     int factN = factNm1 * n;
//     return factN;
// }


// Properties of Recursion
// a. Anything that can be done with iteration, can be done with recursion and vice-versa.
// b. Recursion can sometimes give the most simple solution.
// c. Base Case is the condition which stops recursion.
// d. Iteration has infinite loop & Recursion has stack overflow.

// Practice Question 34 ===> Write a function to convert celsius to fahrenheit.

// float convertTemp(float celsius);

// int main(){
//     float far = convertTemp(37);
//     printf("far %f", far);
//     return 0;
// }

// float convertTemp(float celsius){
//     float far = celsius * (9.0 / 5.0) + 32;
//     return far;
// }


// Practice Question 34 ===> Write a function to calculate Percentage of student from Marks in Science, Math & Sanskrit.

// int calcPercentage(int science, int math, int bangla);

// int main(){
//     int science = 98;
//     int math = 95;
//     int bangla = 99;
//     printf("percentage is : %d", calcPercentage(science, math, bangla));
//     return 0;
// }

// int calcPercentage(int science, int math, int bangla){
//     return ((science + math + bangla) / 3);
// }

// Practice Question 35 ===> Write a function to print n terms of the fibonacci sequence.

// int fib(int n);
// int main(){
//     printf("%d", fib(6));
//     return 0;
// }

// int fib(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n ==  1){
//         return 1;
//     }
    
//     int fibNm1 = fib(n - 1);
//     int fibNm2 = fib(n - 2);
//     int fibN = fibNm1 + fibNm2;
//     // printf("fib of %d is : %d \n", n, fibN);
//     return fibN;
// }

// Practice Question 36 ===> Write a function to print the nth term of the fibonacci sequence.

// HOMEWORK SET
// a. Write a function to find usm of digits of a number;
// b. Write a function to find squrare root of number;
// c. Write a function to print "Hot" or "Cold" depends on the temperature user enters.
// d. Make your own pow function.



