#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;       
    return n*fact(n-1);
}
void main (){
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Result: %d", fact(num));
}