#include<stdio.h>

#include "difference_of_squares.h"
unsigned int sum_of_squares(int number){
    return (number*(number+1)*(2*number+1)/6);
}
unsigned int square_of_sum(int number){
    return ((number*(number+1)/2)*(number*(number+1)/2));
}
unsigned int difference(int number){
    return (square_of_sum(number) - sum_of_squares(number));
}

int main (){
    int num;
    scanf("%u", &num);
    printf("%u", square_of_sum(num)-sum_of_squares(num));
    return 0;
}
