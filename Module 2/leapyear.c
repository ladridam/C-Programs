#include<stdio.h>
int leapyear(int year){
    if((year%4==0 && year%100!=0) || year%400==0){
        return 1;
    }
    return 0;
}
int main(){
    int year;
    printf("Year: ");
    scanf("%d", &year);
    int result = leapyear(year);
    if (result>0)
    {
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    return 0;
}