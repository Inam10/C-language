//write a program to interchange values of two variables without using third variable
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter your First number : \n");
    scanf("%d", &a);
    printf("Enter your second number : \n");
    scanf("%d", &b);
    printf("Before Swapping values : ");
    printf("%d %d ", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n After swapping values : ");
    printf("%d %d", a, b);
    return 0;
}
