#include <stdio.h>
#include <arm_neon.h>

int main(){
    uint8x16_t v1, v2;
    for (int idx = 0; idx < 15; ++idx) {
        v1[idx] = 2 * (v2[idx] = idx);
    }
    uint8x16_t res = v1 * v2;
    char *sep = "";
    for (int idx = 0; idx < 15; ++idx) {
        printf("%s%d", sep, res[idx]);
        sep = ", ";
    }
    printf("\n");
}
