#include <stdio.h>

int main(void) {
    float start, end, increment;
    printf("Enter the starting temperature (F): ");
    scanf("%f", &start);
    printf("Enter the ending temperature (F): ");
    scanf("%f", &end);
    printf("Enter the increment value: ");
    scanf("%f", &increment);

    printf("\nTemperature Table (Fahrenheit to Celsius):\n");

    printf("Fahrenheit | Celsius\n");


    for (float a = start; a <= end; a += increment) {
        float celsius = (a - 32.0) * 5.0 / 9.0;
        printf("%6.2f F | %6.2f C\n", a, celsius);
    }

    return 0;
}
