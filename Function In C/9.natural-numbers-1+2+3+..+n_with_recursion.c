#include <stdio.h>
int sum(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num));
    return 0;
}

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n+sum(n-1);
}
