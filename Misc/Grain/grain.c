#include "grain.h"
#include<stdio.h>

uint64_t square(uint8_t index){
    //checking underflow and overflow
    if(index < 1 || index > 64)
        return 0;
    return (uint64_t)1<<(index-1); //basically it's 2^(index-1)
}
uint64_t total(void){
    uint64_t totalgrain = 0;
    for (uint8_t i = 1; i <= 64; i++)
    {
        totalgrain+=square(i);
    }
    return totalgrain;
}
int main(){
    // Display the amount of grain on each square
    printf("Grains on each square:\n");
    for (uint8_t i = 1; i <= 64; i++) {
        printf("Square %2d: %llu grains\n", i, square(i));
    }

    // Display the total amount of grain on the chessboard
    printf("Total grains on the chessboard: %llu grains\n", total());
    
    return 0;
}
