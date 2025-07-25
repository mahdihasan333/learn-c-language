#include <stdio.h>
#include <math.h>

int main()
{
    // 1. Type Declaration Instructions
    // int age = 22;int oldAge = age;
    // int newAge = oldAge + 2;
    // printf("new age is : %d", newAge);
    // int rupee = 1, dollar;
    // dollar = 74;
    /*
    order of declaration is important - Wrong Declaration Order
    float pi = 3.14;
    float area = pi * rad * rad;
    float rad = 3;
    */
    // valid declaration
    // int age1, age2, age3;
    // age1 = age2 = age3 = 22;
    // invalid
    // int a1 = a2 = a3 = 22;

    // --------------------------------
    // Type Declaration Instructions
    // int a = 22;
    // int b = a;
    // int c = b * c;
    // int d = 1, e;

    // int oldAge = 22;
    // int years = 2;
    // int newAge = oldAge + years;

    // int x,y,z = 4;
    // x = y = z = 4;

    // 2. Arithmetic Instructions
    // int a = 1, b = 2, c = 3;
    // valida = b + c;
    // invalid// b + c = a;
    // printf("%d \n", 3 % 2);
    // printf("%d \n", -3 % 2);

    // > Type Conversion
    // printf("sum of 2 & 3 : %d", 2 + 3);
    // printf("sum of 2.0 & 3 : %f", 2.0 + 3);
    // printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);

    // > Associativity
    // printf(" Output : %d", 5+2/2*3);

    // int a = 1, b = 2;
    // int sum = a + b;
    // int multiply = a * b;
    // int x, y = a * b;

    // int b, c;
    // b = c = 1;
    // int a = b + c;
    // int power = pow(b, c);
    // printf("%d", power);

    // printf("%d", 16 % 10);

    // printf("%d \n", -8 % 3);
    // printf("%d \n", 8 % 3);

    // Arithmetic Instructions
    // printf("%d \n", 2 * 2);
    // printf("%f \n", 2.0 * 2);
    // printf("%f \n", 2.0 * 2.0);
    // printf("%f \n", 4 / 2.0);

    // printf("%d \n", 2 / 3);
    // printf("%d \n", 3 / 2);
    // printf("%f \n", 3.0 / 2);

    // Practice Question 3
    // Solve: int a = 1.999999; float number into integer
    //  int a = 1.999999;
    //  printf("%d \n", a);

    // int a = (int) 1.999999;
    // printf("%d \n", a);

    // Operator Precedence
    // *, /, %
    // +, -
    // =
    // int a = 4 + 9 * 10;
    // printf("%d \n", a);     // answer 9 * 10 + 4 = 94

    // Associativity (for same precedence) ---> Left to Right
    // x = 4 * 3 / 6 * 2        //answer (4 * 3) /6) * 2 = 4

    // int x = 4 * 3 / 6 * 2;
    // printf("%d \n", x);

    // Practice Questions 4
    // a. 5 * 2 - 2 * 3     5*2=10      2*3=6   10-6===> a.4
    // b. 5 * 2 / 2 * 3     10/2        =>5*3===> b.15
    // c. 5 * (2 / 2) * 3   5*(1)*3     =>5*3===> c.15
    // d. 5 + 2 / 2 * 3     5+((2/2)*3)     =>5+(1*3)   => 5+3===> d.8

    // int a = 5 * 2 - 2 * 3;
    // printf("%d \n", a);

    // int b = 5 * 2 / 2 * 3;
    // printf("%d \n", b);

    // int c = 5 * (2 / 2) * 3;
    // printf("%d \n", c);

    // int d = 5 + 2 / 2 * 3;
    // printf("%d \n", d);

    // Control Instructions ===>Used to determine flow of program
    // a. Sequence Control
    // b. Decision Control
    // c. Loop Control
    // d. Case Control

    // Operators
    // a. Arithmetic Operators      ---> +, -, /, *, %
    // b. Relational Operators      ---> ==, >, >=, <, <=, !=
    // c. Logical Operators         ---> && = AND, || = OR, ! = NOT
    // d. Bitwise Operators
    // e. Assignment Operators      ---> =, +=, -=, *=, /=, &=
    // f. Ternary Operator

    // b. Relational Operators
    // printf("%d \n", 4==4);
    // printf("%d \n", 4<3);
    // printf("%d \n", 3<4);
    // printf("%d \n", 4<4);
    // printf("%d \n", 4<=4);
    // printf("%d \n", 4>3);
    // printf("%d \n", 3>4);
    // printf("%d \n", 4>4);
    // printf("%d \n", 4>=4);
    // printf("%d \n", 4!=4);
    // printf("%d \n", 3!=4);

    // c. Logical Operators
    // printf("%d \n", 3<4 && 3<5);
    // printf("%d \n", 3<4 && 5<4);
    // printf("%d \n", 3<4 && 5<4);
    // printf("%d \n", 3>4 && 5>4);
    // printf("%d \n", 3<4 && 3<5);
    // printf("%d \n", !(3<4 && 3<5));
    // printf("%d \n", !(4<3 || 5<3));

    // Operator Precendence
    // priority             Operator
    // 1                           !
    // 2                           *, /, %
    // 3                           +, -
    // 4                           <, <=, >, >=
    // 5                           ==, !=
    // 6                           &&
    // 7                           ||
    // 8                           =

    // e. Assignment Operators
    // int a = 10;
    // a += 10;
    // printf("a+10 = %d \n", a);

    // a -= 10;
    // printf("a-10 = %d \n", a);

    // a *= 10;
    // printf("a*10 = %d \n", a);

    // a /= 10;
    // printf("a/10 = %d \n", a);

    // a %= 10;
    // printf("a%c10 = %d \n", '%', a);

    // Practice Questions 5 ===> Write a progaram to check if a number is divisible by 2 or not.
    // int x;
    // printf("enter a number: ");
    // scanf("%d", &x);
    // printf("%d", x % 2 == 0)

    // Practice Questions 6 ===> Write a progaram to check if a number is odd or even
    // even -> 1
    // odd -> 0
    // int y;
    // printf("enter a number: ");
    // scanf("%d", &y);
    // printf("%d", y % 2 == 0);

    // Practice Questions 7 ===> Are the following valid or not
    // a. int a = 8^8  ===>    printf("%d", 8^8)        valid
    // b. int x; int y = x;     int x; int y = x;       valid
    // c. int x,y = x           int x,y = x;            invalid
    // d. char stars="**"        char stars = "**"      invalid

    // Practice Questions 8     ===> Print 1(true) or 0(false) for following statements:

    // a. if it's sunday & it's snowing -> true
    // int isSunday = 1;
    // int isSnowing = 1;
    // printf("%d \n", isSunday && isSnowing);

    // int isSunday = 0;
    // int isSnowing = 1;
    // printf("%d \n", isSunday && isSnowing);

    // b. if it's monday or it's raining -> true
    // int isMondy = 0;
    // int isRaining = 1;
    // printf("%d \n", isMondy || isRaining);

    // c. if a number is greater htan 9 & less than 100 -> true     (2 digit number)
    // int a = 89;
    // printf("%d", a > 9 && a < 99);

    int x;
    printf("enter number : ");
    scanf("%d", &x);
    printf("%d \n", x > 9 && x < 100);

    // Extra Practice
    // a. Write a program to print the average of 3 numbers

        // b. Write a program to check if given character is digit or not
        // c. Wite a program to print the smallest number

        // Practice Questions 9 ===> Write a progaram to check if a student passed or failed.
        // marks > 30 is PASS       ===> marks <= 30 is FAIL

    return 0;
}
