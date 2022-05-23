#include <stdio.h>






int main() {
float fahrenheit;
float celsius;
float freezing = 32.0f, factor = 5.0f/9.0f;
fahrenheit = 80.f;
celsius = (fahrenheit - freezing) * factor;
printf("Fahrenheit: %g\nCelsius equivalent: %.1f\n", 
       fahrenheit, celsius);
return 0;
}
