//Write a program to show the following information of an item as :
// item no. , item price , no of quantity , total number :

#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a , b , c, tot ;
    printf("Enter your item number : ");
    scanf("%d" , &a);
    printf("Enter the item price : ");
    scanf("%d" , &b);
    printf("Enter the quantity of item :");
    scanf("%d",&c);
    tot = b*c;
    printf("Your total amout of item is : %d" , tot);
    return 0;
}
