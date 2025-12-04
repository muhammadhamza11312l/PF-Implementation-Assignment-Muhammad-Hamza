#include <stdio.h>

int main() {
    int hours, minutes, seconds, totalSeconds;

    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // 1 hour = 3600 seconds, 1 min = 60 seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total time in seconds: %d\n", totalSeconds);

    return 0;
}