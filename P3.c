//Program for add two numbers by user input
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter your first number : ");
    scanf("%d", &a);
    printf("Enter your second number :");
    scanf("%d", &b);
    c = a + b;
    printf("The sum of two number is : %d ", c);

    return 0;
}
