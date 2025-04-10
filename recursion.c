#include<stdio.h>
/*find factorial of a number*/
int factorial(int n){
    return n*(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n ==0 || n ==1)
    {
        /* code */
        printf("Factorial of %d is %d\n", n, 1);
    }else{
        printf("Factorial of %d is %d",n,factorial(n));
    }        
    return 0;
}