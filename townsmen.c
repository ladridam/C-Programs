#include<stdio.h>
void main()
{
    int pop = 80000;
    float men = pop*0.52;
    float Lmen = men*0.35;
    float Ilmen = men - Lmen;
    float Lwen = (0.48*pop)-(0.35*men);
    float Ilwmen = (pop*0.52)-Ilmen;

    printf("Total population of the town is: %d\n", pop);
    printf("Number of men in town is: %.f\n", men);
    printf("Literate men in town is: %.f\n", Lmen);
    printf("Literate women in town is: %.f\n", Lwen);
    printf("Illiterate men in town: %.f\n", Ilmen);
    printf("Illiterate women in town: %.f\n", Ilwmen);

}