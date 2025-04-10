#include<stdio.h>
int add(int, int);
int main (){
    int num1, num2;
    printf("Enter 2 numbers: \n");
    scanf("%d\t%d", &num1, &num2);
    int result = add(num1, num2);
    printf("Result: %d", result);
}
int add(int a, int b){
    if (b==0)
    {
        return a;
    }
    return add(a+1, b-1);
}