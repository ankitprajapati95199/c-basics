#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&celcius);
    fahrenheit = (9 * celcius) / 5 + 32;
    printf("The temperature in fahrenheit is %f",fahrenheit);
    return 0;
}