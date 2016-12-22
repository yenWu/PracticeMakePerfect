#include <stdio.h>


typedef struct _test {
    int a0_12 :13;
    int a13 :1;
    int a14_15 :2;
    int a16_31: 16;
} test_t;
    

int main() {

    test_t a = {.a0_12 = 13, .a13 = 1, .a14_15 = 2, .a16_31 = 16};

    printf("(bitfiled would signed extension with arithmetic)a0_12 = %d, a13 = %d, a14_15 = %d, a16_31 = %d\n", a.a0_12, a.a13, a.a14_15, a.a16_31);
    printf("(bitfiled would signed extension with arithmetic)a0_12 = %u, a13 = %u, a14_15 = %u, a16_31 = %u\n", a.a0_12, a.a13, a.a14_15, a.a16_31);
    printf("(bitfiled would signed extension with arithmetic)a0_12 =0x%X, a13 =0x%X, a14_15 =0x%X, a16_31 =0x%X\n", a.a0_12, a.a13, a.a14_15, a.a16_31);
}