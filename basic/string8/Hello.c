// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

// Strings ==> A character array terminated by a '\O'(null character)
// null character denotes string termination
// example
// char name[] = {'M', 'A', 'H', 'D', 'I', '\0'};
// char name[] = "Mahdi";
// char class[] = {'M', 'A', 'H', 'D', 'I', 'H', 'A', 'S', 'S', 'A', 'N', '\0'};
// char class[] = "Mahdi Hassan";


// Priactice Question 47; Create a String firstName & lastName to store details of user &print all the characters using a loop.

// void printString(char arr[]);

// int main() {
//     char firstName[] = "Mahdi";
//     char lastName[] = "Hassan";
    
//     printString(firstName);
//     printString(lastName);
    
//     return 0;
// }


// void printString(char arr[]){
//     for(int i = 0; arr[i] != '\0'; i++){
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// String Format Specifier  ===> "%s"
// char name[] = "Mahdi";
// printf("%s", name)
// int main(){
//     // char name[] = "Mahdi";
//     // printf("%s", name);
//     char name[50];
//     scanf("%s", name);
//     printf("your name is %s", name);
//     return 0;
// }

// Practice Question 48 ===> Ask the user to enter their firstName & print it back to them. ---> Also try this with their fullName.

// int main(){
//     // char firstName[50];
//     // scanf("%s", firstName);
//     // printf("My name is: %s\n", firstName); 
    
    
//     char fullName[100];
//     scanf("%s", fullName);
//     printf("my full name is : %s", fullName);
//     return 0;
// }

// String Functions 

// IMPORTANT    ===> scanf() cannot input multi-word strings wiht spaces ---> Here, gets() & puts() come into picture.

// gets(str) ===> input a string (even multiword) ---> Dangerous & Outdated
// puts(str) ===> output a string
// fgets(str, n, file) ===> stops when n-1 chars input or new line entered

// int main(){
//     char str[100];
//     fgets(str, 100, stdin);
//     puts(str);
// }


// String using Pointers
// char *str = "Hello World";
// Store string in memory & the assigned address is stored in the char pointer 'str'

// char *str = "Hello World";       //can be reinitialized

// char str[] = "Hello world";      // cannot be reinitialized


// int main(){
//     char *canChange = "Hello World";
//     puts(canChange);
//     canChange = "Hello";
//     puts(canChange);
    
//     return 0;
// }


// Practice Question 49 ===> Make a program that inputs user's name & prints its length.

// int countLength(char arr[]);
// int main(){
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("length is : %d", countLength(name));
//     return 0;
// }

// int countLength(char arr[]){
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }


// Standard Library Functions <string.h>
// 1 strlen(str) ===> count number of characters exculuding '\0'

// int countLength(char arr[]);
// int main(){
//     char name[] = "Mahdi";
//     int length = strlen(name);
//     printf("length is : %d", length);
//     return 0;
// }

// int countLength(char arr[]){
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }


// Standard Library Funcitons <string.h>
// 2 strcpy(newStr, oldStr) ===> copies value of old string to new string
// int main(){
//     char oldStr[] = "oldStr";
//     char newStr[] = "newStr";
//     strcpy(newStr, oldStr);
//     puts(newStr);
// }


// Standard Library Funcitons <string.h>
// 3 strcat(firstStr, secStr) ===> concatenates first string with second string

// int main(){
//     char firstStr[100] = "mahdi ";
//     char secString[] = "Hassan";
//     strcat(firstStr, secString);
//     puts(firstStr);
// }


// Standard Library Funcitons <string.h>
// 4 strcmp(firstStr, secStr) ===> Compares 2 strings & returns a value
// 0 -> string equal
// positive -> first > second(ASCII)
// negative -> first < second (ASCII)

// int main(){
//     char firstStr[] = "Apple";
//     char secStr[] = "Banana";
//     printf("%d \n", strcmp(firstStr, secStr));
// }

// Practice Question 50 ===> Take a string input form the user using %c.

// int main(){
//     char str[100];
//     char ch;
//     int i = 0;
    
//     while(ch != '\n'){
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
// }


// Practice Question 51 ===> Salting ---> Find the salting form of a password entered by user if the salt is "123" & added at the end.

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);

}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];
    
    strcpy(newPass, password);          // newPass = 'test';
    strcpy(newPass, salt);              // newPass = "test"
    puts(newPass);
}









