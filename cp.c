#include<stdio.h>
void main ()
{
    float tp, tsp, tcp, cp;
    printf("Please enter total selling price: \n");
    scanf("%f", &tsp);
    printf("Please enter total profit: \n");
    scanf("%f", &tp);

    tcp = tsp-tp;
    cp = tcp/15;

    printf("Cost per item: %.2f", cp);
}