#include<stdio.h>
void main ()
{
    int year, days=1;
    printf("Enter the year: \n");
    scanf("%d", &year);

    for (int i = 1; i < year; i++)
    {
        if (i%4==0 &&(i%100!=0 || i%400==0))
        {
            days+=366; //leap years
        }
        else
        {
            days+=365; //normal years
        }
        
    }

    int dayOfWeek = days%7;
    switch (dayOfWeek)
    {
    case 0:
        printf("01/01/%d = Sunday.\n", year);
        break;
    case 1:
        printf("01/01/%d = Monday.\n", year);
        break;
    case 2:
        printf("01/01/%d = Tuesday.\n", year);
        break;
    case 3:
        printf("01/01/%d = Wednesday.\n", year);
        break;
    case 4:
        printf("01/01/%d = Thursday.\n", year);
        break;
    case 5:
        printf("01/01/%d = Friday.\n", year);
        break;
    case 6:
        printf("01/01/%d = Saturday.\n", year);
        break;
    }
    
}