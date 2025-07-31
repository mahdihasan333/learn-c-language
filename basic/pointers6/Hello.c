// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

// int main(){
    // Pointers ===> A variable that stores the memory address of another variable.
    // Syntax
    // int age = 22;
    // int *ptr = &age;     // * => value at address operator  & => address of operator
    // int _age = *ptr;
    
    // printf("%d", _age);
    
    // Declaring Pointers
    // int *ptr;
    // char *ptr;
    // float *ptr;
    
    // Format Specifier
    // prinft("%p", &age);
    // prinft("%p", ptr);
    // prinft("%p", &ptr);
    
    // int age = 22;
    // int *ptr = &age;
    
    // address
    // printf("%p \n", &age);
    // printf("%u \n", &age);
    
    // printf("%u \n", ptr);
    
    // printf("%u \n", &ptr);
    
    // Fortmat Specifier
    // printf("%d", age);
    // printf("%d", *ptr);
    // printf("%d", *(&age));
    
    // int age = 22;
    // int *ptr = &age;
    
    // value
    // printf("%d \n", age);
    // printf("%d \n", *ptr);
    // printf("%d \n", *(&age));
    

    // Practice Question 37 ===> 
    // int x;
    // int *ptr;
    
    // ptr = &x;
    // *ptr = 0;
    
    // printf("x = %d \n", x);  // 0
    // printf("*ptr = %d \n", *ptr);   // 0

    // *ptr += 5;      // x = 5
    // printf("x = %d \n", x);  // 5
    // printf("*ptr = %d \n", *ptr);   // 5
    
    // (*ptr)++;
    // printf("x = %d \n", x);  // 6
    // printf("*ptr = %d \n", *ptr);   // 6
    
    
    // Pointer to Pointer ===> A variable that stores the memory address of another pointer.
    
    // Pointer to Pointer
    // Syntax
    // int **pptr;
    // char  **pptr;
    // float **pptr;
    
    // Practice Question 38 ===> Print the value of 'i' from its pointer to pointer.
    
    // int i = 5;
    // int *ptr = &i;
    // int **ptr = &ptr;
    
    // printf("%d \n", **pptr);
    
    // Pointers in Funciton Call
    // Call by Value ===> We pass value of variable as argument
    // call by Reference ===> We pass address of variable as argument
    
    
//     return 0;
// }

// void square(int n);
// void _square(int* n);

// int main(){
//     int number = 4;
//     square(number);
//     printf("number = %d \n", number);
    
//     _square(&number);
//     printf("number = %d \n", number);
//     return 0;
// }

// // call by value
// void square(int n){
//     n = n * n;
//     printf("square = %d \n", n);
// }

// void _square(int* n){
//     *n = (*n) * (*n);       //4 * 4
//     printf("square = %d \n", *n);
// }

// Practice Question 39 ===> Swap 2 numbers, a & b.

// void swap(int a, int b);

// int main(){
//     int x = 3, y = 5;
//     swap(x, y);
//     printf("x = %d & y = %d", x, y);
//     return 0;
// }

// // call by value
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d \n", a, b);
// }


// void _swap(int *a, int *b);
// int main(){
//      int x = 3, y = 5;
//      _swap(&x, &y);
//     printf("x = %d & y = %d", x, y);
//     return 0;
// }

// // call by reference
// void _swap(int *a, int *b){
//     int t = *a;
//     int *a = *b;
//     int *b = t;
// }


// Practice Question 40 ===> Will the address output be same?

// call by value
// void printAddress(int n);

// int main(){
//     int n = 4;
//     printAddress(n);
//     printf("address of n is : %u \n", &n);
//     return 0;
// }

// void printAddress(int n){
//     printf("address of n is : %u \n", &n);
// }


// call by reference
// void printAddress(int *n);

// int main(){
//     int n = 4;
//     printAddress(&n);
//     printf("address of n is : %u \n", &n);
//     return 0;
// }

// void printAddress(int *n){
//     printf("address of n is : %u \n", n);
// }


// Practice Question 41 ===> Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    
    printf("sum = %d, prod = %d, avg = %d \n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}



