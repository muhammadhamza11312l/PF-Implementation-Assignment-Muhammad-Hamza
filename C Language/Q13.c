#include <stdio.h>
#define PI_MACRO 3.1417 // Preprocessor directive

int main() {
    float r = 6.0;
    float area;

    area = PI_MACRO * r * r;

    printf("Area of Circle: %.4f\n", area);
    return 0;
}