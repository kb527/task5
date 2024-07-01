#include <stdio.h>

int countValidSequences(int length) {
    const int mod = 12345;
    if (length == 1) return 2;
    if (length == 2) return 4;

    int a = 2, b = 4, c = 7, temp;
    for (int i = 3; i < length; ++i) {
        temp = (c + b + a) % mod;
        a = b;
        b = c;
        c = temp;
    }
    return c;
}

int main() {
    int n;
    printf("Enter the length of sequences (n): ");
    scanf("%d", &n);
    if (n > 1 && n < 10000) {
        printf("The number of valid sequences of length %d is: %d\n", n, countValidSequences(n));
    } else {
        printf("The value of n should be greater than 1 and less than 10000.\n");
    }
    return 0;
}
