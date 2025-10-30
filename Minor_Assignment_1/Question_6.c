#include <stdio.h>

int main() {
    float speed, distance;
    
    printf("Enter takeoff speed in kmph: ");
    scanf("%f", &speed);
    getchar();
    printf("Enter distance covered during takeoff in meters: ");
    scanf("%f", &distance);

    speed = (speed * 1000)/(60 * 60);
    
    double acceleration = (speed * speed)/(2 * distance);
    double takeoffTime = speed / acceleration;

    printf("The acceleration of the jet was: %lf m/s\n", acceleration);
    printf("The time taken to takeoff was: %lf s\n", takeoffTime);

    return 0;
}
