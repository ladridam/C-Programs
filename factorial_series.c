#include<stdio.h>
void main (){
    int num;
    float sum = 0.0;
    printf("Please enter the range: \n");
    scanf("%d", &num);
    for (int i = 1; i <=num; i++)
    {
        int f = 1;
        for (int j = 1; j <=i; j++)
        {
            f=f*j;
        }
        sum += (float)i/f;
    }
    printf("Sum: %.2f\n", sum);
}