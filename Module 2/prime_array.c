#include<stdio.h>
int prime(int num){
    if(num<=1) 
        return 0;
    /*0 & 1 are not primes
      hence they return 0*/
    for (int j = 2; j*j <= num; j++)
    /*condition to check prime: 
    i. starts checking every divisor from 2, since 1 is the common divisor 
    ii. j*j checks if j squared is less than or equal to num
    iii. 
    */
    {
        if (num%j==0)
        {
            return 0;
        }
    }
    return 1;
}

int main (){
    int array[6]={1,5,2,4,7,9};
    for (int i = 0; i < 6; i++)
    {
        int num = array[i];
        if(prime(num)){
            printf("%d is prime\n", num);
        }else{
            printf("%d is not prime\n", num);
        }
    }
    return 0;
}