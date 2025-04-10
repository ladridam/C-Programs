#include<stdio.h>
int main (){
    int number;
    printf("Enter 5 digit number: \n");
    scanf("%d", &number);
    int temp = number;
    int rev = 0, digit = 0;
    while (temp!=0)
    {
        digit = temp%10;
        rev = (rev*10)+digit;
        temp = temp/10;
    }
    printf("Reversed number: %d", rev);
}