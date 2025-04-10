#include<stdio.h>
int num(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (num(n)==1)
    {
        printf("%d is Even", n);
    }
    else{
        printf("%d is Odd", n);
    }
    
}

int num(int n){
    if (n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}