#include "collatz_conjecture.h"
#include <stdio.h>
int steps(int start){
    if(start <=0){
        return ERROR_VALUE;
    }

    int count = 0;

    while (start!=1)
    {
        if(start%2==0){
            start /= 2;
        } else {
            start = 3*start+1;
        }
        count++;
    }
    return count;
}
int main(){
  int num;
  scanf("%D", &num);
  if(num==0){
    printf("Error");
  }
  int result = steps(num);
  printf("Number of Steps: %d", result);
  return 0;
}
