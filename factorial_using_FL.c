#include<stdio.h>
void main ()
{
    int n = 1, i, num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num==0){
        printf("Factorial of %d is 1\n", num);
    }
    else
    {
        for ( i = 1; i <= num; i++)
        {
            n= n*i;
        }
        printf("Factorial is: %d", n);
    }        
}