#include <stdio.h>

int main() {
    int hours = 1;  
    int minutes = 15;
    int seconds = 30;
    int totalSeconds;

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);
    printf("Total time in seconds = %d\n", totalSeconds);

}
