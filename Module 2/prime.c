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
    iii. reduces the number of iterations
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
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    if(prime(user_input)){
        printf("%d is prime\n", user_input); 
    }else{
        printf("%d is not prime", user_input);
    }
    return 0;
}