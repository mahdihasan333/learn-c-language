#include <stdio.h>
#include <string.h>

// Structure ===> a collection of values of different data types
// Example: For a student store the following:
// name(String) | roll no(integer) | cgpa(float)

// Syntax
// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };


// user-defined data type
// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };

// int main(){
//     struct student s1;
//     s1.roll = 1664;
//     s1.cgpa = 9.5;
//     // s1.name = "Mahdi"; // not allowed
//     strcpy(s1.name, "Mahdi");

    
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll is %d\n", s1.roll);
//     printf("Student cgpa is %f\n", s1.cgpa);
    
//     return 0;
// }


// Practice Question 55 ===> Write a program to store the data of 3 students.

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };


struct student{
    int roll;
    float cgpa;
    char name[100];
};



int main(){
    // struct student s1;
    // s1.roll = 1664;
    // s1.cgpa = 9.5;
    // // s1.name = "Mahdi"; // not allowed
    // strcpy(s1.name, "Mahdi");


    // printf("Student name is %s\n", s1.name);
    // printf("Student roll is %d\n", s1.roll);
    // printf("Student cgpa is %f\n", s1.cgpa);


    // struct student s2;
    // s2.roll = 1660;
    // s2.cgpa = 9.4;
    // strcpy(s2.name, "Hassan");


    // printf("Student name is %s\n", s2.name);
    // printf("Student roll is %d\n", s2.roll);
    // printf("Student cgpa is %f\n", s2.cgpa);


    // struct student s3;
    // s3.roll = 1650;
    // s3.cgpa = 8.4;
    // strcpy(s3.name, "Rafi");


    // printf("Student name is %s\n", s3.name);
    // printf("Student roll is %d\n", s3.roll);
    // printf("Student cgpa is %f\n", s3.cgpa);



    // Array of structures
    // struct student ECE[100];
    // struct student COE[100];
    // struct student IT[100];

    // // access
    // IT[0].roll = 200;
    // IT[0].cgpa = 7.9;

    
    // struct student coe[100];
    // coe[0].roll = 1696;
    // coe[0].cgpa = 8.8;
    // strcpy(coe[0].name, "Rafi");
    // printf("name = %s \n", coe[0].name);
    
    // struct student ece[100];
    // ece[0].roll = 1696;
    // ece[0].cgpa = 9.8;
    // strcpy(ece[0].name, "Hassan");
    // printf("name = %s \n", ece[0].name);
    
    // struct student IT[100];
    // IT[0].roll = 1696;
    // IT[0].cgpa = 8.8;
    // strcpy(IT[0].name, "Mahdi");
    // printf("name = %s \n", IT[0].name);



    // Initializing Structure
    // struct student s1 = {"Mahdi",1776, 7.9};
    // struct student s2 = {"Hassan",1777, 8.7};
    // struct student s3 = {0};

    struct student s1 = {1776, 7.9, "Mahdi"};
    printf("student roll = %d \n", s1.roll);


    
    return 0;
}