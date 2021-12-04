//Write a program to interchange values of two variables, using third variable
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter your first value :\n");
    scanf("%d", &a);
    printf("Enter your second value : \n");
    scanf("%d", &b);
    printf("Before swapping values :\n");
    printf("%d %d ", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping values :\n");
    printf("%d %d", a, b);
    getch();

    return 0;
}
