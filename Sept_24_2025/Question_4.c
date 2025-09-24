// Will have to complete this

#include <stdio.h>

int main() {
    char unit, choice;
    float temperature;
    printf("Enter unit (c-Celsius, f-Fahrenheit, k-Kelvin): ");
    scanf("%c", &unit);
    char a = getchar();
    printf("Enter temperature value: ");
    scanf("%f", temperature);

    printf("Enter conversion unit (c-celsius, f-fahrenheit, k-kelvin): ");
    scanf("%c", choice);

    switch(choice) {
        case 'c': switch(unit) {
            case 'c': printf("%f celsius", temperature);
                    break;
            case 'f': float val = (9/5) * temperature + 32;
                        printf("%f fahrenheits", val);
                        break;
            case 'k': float val = temperature - 273;
                        printf("%f kelvin", val);
                        break;
            default: printf("Wrong choice\n");
                    break;
        }
        break;
        case 'f': switch(unit) {
            case 'f': printf("%f fahrenheits", temperature);
                        break;
            case 'c': float val = (5/9) * (temperature-32);
                        printf("%f celsius", val);
                        break;
            case 'k': float val = (5/9) * (temperature-32);
                        float kel = val + 273;
                        printf("%f kelvin", kel);
                        break;
            default: printf("Wrong choice\n");
                        break;
        }
        break;
        case 'k': switch(unit) {
            case 'c': printf("%f celsius", (temperature+273));
                    break;
            case 'k': printf("") 
        }
    }

    
    return 0;
}
