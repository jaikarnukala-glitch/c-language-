//Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main() {
    int a, b;
    int num;
    printf("enter numbers: ");
    scanf("%d %d", &a, &b);
    num = a + b;
    printf("sum = %d",num);
    return 0;

}