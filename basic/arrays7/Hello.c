
#include <stdio.h>

// int main() {
    // Array ===> Collection of similar data types stored at contiguous memory locations.
    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 89;
    
    // int marks[] = {97, 98, 89};
    
    // Syntax
    // int marks[3];
    // char name[10];
    // float price[2];
    
    // input & output
    // scanf("%d", &marks[0]);
    
    // printf("%d", marks[0]);
    
    // int marks[3];
    // printf("enter phy : ");
    // scanf("%d", &marks[0]);
    
    // printf("enter chem : ");
    // scanf("%d", &marks[1]);
    
    // printf("enter math : ");
    // scanf("%d", &marks[2]);
    
    // printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]); 
    
    // Practice Question 42 ===> Write a program to enter price o f3 items & print their final cost with gst.
    
    // float price[3];
    
    // printf("enter 3 prices : ");
    // scanf("%f", &price[0]);
    // scanf("%f", &price[1]);
    // scanf("%f", &price[2]);
    
    // printf("total price 1 : %f \n", price[0] + (0.18*price[0]));
    // printf("total price 2 : %f \n", price[0] + (0.18*price[1]));
    // printf("total price 3 : %f \n", price[0] + (0.18*price[2]));
    
    
    // inititalization of array
    // int marks[] = {97, 98, 89};
    // int marks[3] = {97, 98, 89};
    
    // float price[] = {100.0, 200.0, 300.0};
    
    // Pointer Arithmetic ===> Pointer can be incremented & decremented
    
    // case - 1
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u \n", ptr);
    // ptr++;
    // printf("ptr = %u \n", ptr);
    
    // case - 2
    // float price = 20.00;
    // float *ptr = &price;
    // printf("ptr = %u \n", ptr);
    // ptr++;
    // printf("ptr = %u \n", ptr);
    // ptr--;
    // printf("ptr = %u \n", ptr);
    
    // case - 3
    // char star = '*';
    // char *ptr = &star;
    // printf("ptr = %u \n", ptr);
    // ptr++;
    // printf("ptr = %u \n", ptr);
    // ptr--;
    // printf("ptr = %u \n", ptr);
    
    // Pointer Arithmetic
    // -- We can also subtract one pointer from another.
    // -- We can also compare 2 pointers.
    
    // int age = 22;
    // int _age = 23;
    // int *ptr = &age;
    // int *_ptr = &_age;
    // printf("%u, %u difference = %u \n", ptr, _ptr, ptr-_ptr);
    // _ptr = &age;
    // printf("comparison = %u \n", ptr == _ptr);
    
    // Array is a Pointer
    // int *ptr = &arr[0];
    // int *ptr = arr;
    
    
    // Traverse an Array
    // int aadhar[10];
    // int *ptr = &aadhar[0];
    
    
    
    // int aadhar[5];
    
    // // input
    // int *ptr = &aadhar[0];
    // for(int i = 0; i < 5; i++){
    //     printf("%d index : ", i);
    //     scanf("%d",(ptr+1));
    // }
    
    // // output
    // for(int i = 0;  i < 5; i++){
    //     printf("%d index = %d \n", i, *(ptr+i));
    // }
    
    
    // int aadhar[5];
    
    // // input
    // int *ptr = &aadhar[0];
    // for(int i = 0; i < 5; i++){
    //     printf("%d index : ", i);
    //     scanf("%d", &aadhar[i]);
    // }
    
    // // output
    // for(int i = 0;  i < 5; i++){
    //     printf("%d index = %d \n", i, aadhar[i]);
    // }

    // return 0;
// }


// Array as Function Argument
// Function Declaration ===> void printNumbers(int arr[], int n) || void printNumbers(int *arr, int n)

// Function call
//printNumbers(arr, n);

// void printNumbers(int arr[], int n);

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);
//     return 0;
// }

// void printNumbers(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }



// 
// void printNumbers(int *arr, int n);

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);
//     return 0;
// }

// void printNumbers(int *arr, int n){
//     for(int i = 0; i < n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }


// multidimensional Arrays ===> 2 D Arrays

// int arr[][] = {{1, 2}, {3, 4}}      //Declare

// Access
// arr[0][0]
// arr[0][1]
// arr[1][0]
// arr[1][1]


// int main(){
//     // 2 * 3
//     int marks[2][3];     // _ _ _ | _ _ _
//     marks[0][0] = 90;
//     marks[0][1] = 90;
//     marks[0][2] = 90;
    
//     marks[1][0] = 90;
//     marks[1][1] = 90;
//     marks[1][2] = 90;
    
//     printf("%d", marks[0][0]);
//     return 0;
// }


// // Practice Problem 42 ===> Write a function to count the number of odd numbers in an array.

// int countOdd(int arr[], int n);

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("%d", countOdd(arr, 6));
//     return 0;
// }

// int countOdd(int arr[], int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] % 2 != 0){    // odd
//             count++;
//         }
//     }
//     return count;
// }


// Priactice Question 43;
// int arr[] = {1, 2, 3, 4, 5} for the given array, what will the following give;
// a. *(arr+2)
// b. *(arr+5)

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("%d \n", *(arr+2));
//     printf("%d \n", *(arr+5));
//     return 0;
// }


// Priactice Question 45 ===> Write a function to reverse an array.

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     reverse(arr, 5);
//     printArr(arr, 5);
//     return 0;
// }


// void printArr(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n){
//     for(int i = 0; i < n/2; i++){
//         int firstVal = arr[i];
//         int secondVal = arr[n - i - 1];
//         arr[i] = secondVal;
//         arr[n - i - 1] = firstVal;
//     }
// }



// Priactice Question 45 ===> Write a program to store the first n fiboncacci numbers.

// int main(){
//     int n;
//     printf("enter n (n > 2) : ");
//     scanf("%d", &n);
    
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
    
//     for(int i = 2; i < n; i++){             // 1, 2, 3, 5...
//         fib[i] = fib[i - 1] + fib[i - 2];   // important
//         printf("%d \t", fib[i]);
//     }
//     printf("\n");
//     return 0;
// }


// Priactice Question 46; Create a 2D array, storing the tables of 2 & 3.

void storeTable(int arr[][10], int n, int m, int number);

int main(){
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    
    for(int i = 0; i < 10; i++){
        printf("%d \t", tables[0][i]);
        
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d \t", tables[1][i]);
    }
    
    return 0;
}

void storeTable(int arr[][10], int n, int m, int number){
    for(int i = 0; i < m; i++){
        arr[n][i] = number * (i + 1);
    }
}

// Homework set
// a. In array of numbers, find how many times does a number "x" occurs.
// b. Write a program to print the largest number in an array.
// c. Write a program to insert an element at the end of an array.
