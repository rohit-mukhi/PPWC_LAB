#include <stdio.h>

int main() {
    float distance;
    printf("Enter distance in metres: ");
    scanf("%f", &distance);
    
    double kilometers = distance * 0.001;
    double centimeters = distance * 100;
    double millimeters = distance * 1000;
    double feet = distance * 3.28084;
    double inches = distance * 39.3701;

    printf("+--------------------+--------------------+\n");
    printf("| Unit               | Value              |\n");
    printf("+--------------------+--------------------+\n");
    printf("| Meters             |        %11.2lf |\n", distance);
    printf("| Kilometers         |        %11.2lf |\n", kilometers);
    printf("| Centimeters        |        %11.2lf |\n", centimeters);
    printf("| Millimeters        |        %11.2lf |\n", millimeters);
    printf("| Feet               |        %11.2lf |\n", feet);
    printf("| Inches             |        %11.2lf |\n", inches);
    printf("+--------------------+--------------------+\n");
    return 0;
}
