#include<stdio.h>
void main ()
{
    int n =1, i = 1, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num==0)
    {
        printf("Factorial : 1");
    }
    else
    {
        while (i<=num)  
        {
            n = n*i;
            i++;
        }
        printf("Factorial : %d", n);
    }
    
}