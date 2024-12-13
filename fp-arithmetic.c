#include <stdio.h>
#include <stdint.h>
#include <string.h>

void print_binary(uint32_t n) {
    for(int i = 31; i >= 0; i--){
        printf("%d", (n >> i) & 1);
        if ( i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main() { 
    float num = 3.14f;
    uint32_t binary;
    memcpy(&binary, &num, sizeof(float));
    printf("Binary representation of %f:\n", num);
    print_binary(binary);

    return 0;
}
