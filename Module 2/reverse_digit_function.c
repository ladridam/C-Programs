#include<stdio.h>

int reverse(int num){
    int temp = num;
    int rev = 0, digit = 0;
    while (temp!=0)
    {
        digit = temp%10;
        rev = (rev*10)+digit;
        temp = temp/10;
    }
    return rev;
}

int main (){
    int number; 
    printf("Enter 5 digit number: \n");
    scanf("%d", &number);

    if (number<10000 || number>99999)
    {
        printf("Enter a valid 5 digit number.\n");
        return 1;
    }
    

    int reversed_digit = reverse(number);
    printf("Reversed digit: %d", reversed_digit);

    return 0;
}