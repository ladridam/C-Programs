#include<stdio.h>
int reverse(int x){
    const int max = 2147483647, min = -2147483648;
    int rev = 0, digit = 0, temp = x;
    while (temp!=0)
    {
        digit = temp%10;
        temp /=10;
        if(temp < max/10 || temp > min/10){
            rev = (rev*10)+digit;
        }
        else{
            return 0;
        }
    }
}
int main (){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int result = reverse(number);
    printf("%d", result);
    return 0;
}