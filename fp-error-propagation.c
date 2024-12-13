#include <stdio.h>

int main() {
    float sum = 0.0f;
    for (int i = 0; i < 10; i++) {
        sum += 0.1f;
    }
    printf("Expected: 1.0, Actual: %.10f\n", sum);
    return 0;
}

