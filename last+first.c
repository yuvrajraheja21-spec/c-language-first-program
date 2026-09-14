#include <stdio.h>

int main() {
    int A, B, remainder;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    if (B == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        remainder = A % B;
        printf("Remainder when %d is divided by %d = %d\n", A, B, remainder);
    }

    return 0;
}
