#include <iostream>
#include <cmath>
void update(int *a, int *b) {
    int original_a = *a;
    int original_b = *b;

    *a = original_a + original_b;
    *b = std::abs(original_a - original_b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);
    return 0;
}

