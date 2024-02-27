#include <stdio.h>

int main()
{
    float pounds, kilograms;

    printf("Enter weight in pounds: ");
    scanf("%f", &pounds);

    kilograms = pounds * 0.453592;

    printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);

    return 0;
}
