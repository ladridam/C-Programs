#include<stdio.h>
void main ()
{
    int num; //finds the range
    printf("Enter the range of the series: \n");
    scanf("%d", &num);

    float evenSum = 0.0, oddSum = 0.0;
    for (int c = 1; c <=num; c++)
    {
         if(c%2==0)
        {
            // creating a loop for even factorials
            int even_f=1;
            for (int i = 2; i <=c; i++)
            {
                even_f*=i;
            }
            evenSum+=(float)c/even_f;
        }
        else
        {
            // loop for odd factorials
            int odd_f=1;
            for (int j = 1; j <=c; j++)
            {
                odd_f*=j;
            }
            oddSum+=(float)c/odd_f;
        }
    }
    float totalSum = (oddSum-evenSum);
    printf("%f", totalSum);
}