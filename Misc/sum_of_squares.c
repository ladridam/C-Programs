#include<stdio.h>
unsigned int sum_of_squares(unsigned int number){
    return number*(number+1)*(2*number+1)/6;
}
unsigned int square_of_sum(unsigned int number){
    return (number*(number+1)/2)*(number*(number+1)/2);
}
int main(){
    unsigned int number;
    scanf("%u",&number);
    printf("%u",square_of_sum(number)-sum_of_squares(number));
    return 0;
}