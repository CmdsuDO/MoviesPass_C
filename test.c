#include <stdio.h>

#define MoviesForKids "vaking, me and you, I'm yours"
#define MoviesFor18to25 "Hot me and you, your body, I'm a good boy"
#define MoviesForOnly16 "It's Time To Learn C language !"

int main(int argc, char const *argv[])

{
    char Movies[] = MoviesForKids;
    char Movies18[] = MoviesFor18to25;
    char Movies16[] = MoviesForOnly16;
    int age;
    // Directly use the emoji in the string
    printf("How old are you ? Can you ... \n"); // Right-pointing finger emoji (👉)
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age <= 10) // If the age is 9 or younger
    {
        puts(Movies16); // Show message for age 9 and below
    }
    else if (age <= 17) // If the age is between 10 and 17
    {
        printf("Bro, go to the gym!!!\n");
    }
    else if (age <= 25) // If age is between 18 and 25
    {
        puts(Movies);   // Show general movie list
        puts(Movies18); // Show movies for 18-25
    }
    else if (age <= 30)
    {
        printf("HAHAHA BRO ??");
    }
    else // If age is greater than 25
    {
        printf("You are too old for this.\n");
    }

    return 0;
}
