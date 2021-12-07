#include <stdio.h>

int main(void)
{
    // 123.0;  // double;
    // 123.0F; // float

    // printf("%f\n", 123.45F);
    // printf("%f\n", 123.45);

    printf("%f\n", 2147483648.0);
    printf("%f\n", 2147483648.0 - 20);
    printf("%f\n", 2147483648.0 - 40);
    printf("%f\n", 2147483648.0 - 60);
    printf("%f\n", 2147483648.0 - 64);
    printf("%f\n", 2147483648.0 - 70);
    printf("%f\n", 2147483648.0 - 80);
    return 0;
}