#include<stdio.h>

int main() {

    printf("hello world");
    int a, b, c, d, number;

    printf("Enter 4 digits separated by spaces: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    number = a * 1000 + b * 100 + c * 10 + d;

    printf("The number is: %d\n", number);
    return 0;
}
