#include<stdio.h>
void main ()
{
    float fah, cel;
    printf("Enter Temperature in Fahrenheit: \n");
    scanf("%f", &fah);

    cel = (fah-32)*5/9;
    printf("Celcius: %.2f", cel);
}