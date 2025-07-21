#include <stdio.h> // স্ট্যান্ডার্ড ইনপুট/আউটপুট লাইব্রেরি

int main() // প্রোগ্রামের মূল ফাংশন
{
    // বয়স প্রিন্ট করা
    int age = 22;
    printf("age is %d", age);

    // পাই এর মান প্রিন্ট করা
    float pi = 3.14;
    printf("age is %f \n", pi);

    // তারকা চিহ্ন প্রিন্ট করা
    char star = '*';
    printf("star os %c \n", star);

    // বয়স ইনপুট নিয়ে প্রিন্ট করা
    int age;
    printf("Enter Age");
    scanf("%d", &age);
    printf("age is : %d", age);

    // দুটি সংখ্যার যোগফল হিসাব
    int a, b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum is :"
           "%d",
           sum);
    printf("sum is : %d", a + b);

    // বর্গের ক্ষেত্রফল হিসাব
    int side;
    printf("enter the side");
    scanf("%d", &side);
    printf("area is : %d", side * side);

    // বৃত্তের ক্ষেত্রফল হিসাব
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    printf("area is : %f", 3.14 * radius * radius);

    return 0; // প্রোগ্রাম শেষ
}