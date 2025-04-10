#include<stdio.h>

int odd(int num){
    if(num%2!=0)
        return num;
    return 0;
}

int main (){
    int array[10];
    printf("Enter the numbers: \n");
    for(int a = 0; a < 10; ++a){
        scanf("%d", &array[a]);
    }
    int odd_sum = 0, even_sum=0;
    int size_count = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size_count; i++)
    {
        int num = array[i];
        if(odd(num)){
            odd_sum+=num;
        }else{
            even_sum+=num;
        }
    }
    printf("Sum of only odd numbers in the array: %d", odd_sum);
    printf("\nSum of only even numbers in the array: %d", even_sum);
    printf("\nSum of all the numbers: %d", (odd_sum+even_sum));
    return 0;
}