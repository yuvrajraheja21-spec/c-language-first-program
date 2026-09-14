#include <stdio.h>

int main() {
    int number, d1, d2, d3, d4, sum;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    d1 = number / 1000;          // first digit
    d2 = (number / 100) % 10;    // second digit
    d3 = (number / 10) % 10;     // third digit
    d4 = number % 10;            // last digit

    sum = d1 + d2 + d3 + d4;

    printf("Sum of digits = %d\n", sum);

    return 0;
}
