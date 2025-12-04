#include <stdio.h>

int main() {
    // Using const qualifier
    const float PI = 3.1417; 
    float radius = 5.0;
    float height = 10.0;
    float volume;

    volume = PI * (radius * radius) * height;

    printf("Volume of Cylinder: %.4f\n", volume);
    return 0;
}