#include<stdio.h>

void rectangle(float l, float b);
void circle(float r);

int main ()
{
    float a, b, c;
    printf("Enter lenght and breadth of rectangle: \n");
    scanf("%f%f", &a, &b);
    printf("Enter radius of the circle: \n");
    scanf("%f", &c);

    rectangle(a, b);
    circle(c);

    return 0;
}
void rectangle(float l, float b)
    {
        float area = l*b;
        float perimeter = 2*(l+b);
        printf("Area of rectangle: %.2f sq units\n", area);
        printf("Perimeter of rectangle: %.2f units\n", perimeter);
    }
void circle(float r)
    {
        float area = r*r*3.14;
        float circumference = 2*3.14*r;
        printf("Area of circle: %.2f sq units\n", area);
        printf("Circumference: %.2f units\n", circumference);
    }
