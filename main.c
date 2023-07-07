#include <stdio.h>

int main() {
    int n;
    printf("Введіть довжину послідовностей: ");
    scanf("%d", &n);
    int a = 1, b = 1, c = 1;
    for (int i = 2; i <= n; i++) {
        int new_a = (a + b + c) % 12345;
        int new_b = a % 12345;
        int new_c = b % 12345;
        a = new_a;
        b = new_b;
        c = new_c;
    }
    printf("Кількість послідовностей довжиною %d: %d\n", n, (a + b + c) % 12345);
    return 0;
}
