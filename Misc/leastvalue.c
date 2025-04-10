//finding the least number in an array

#include<stdio.h>

int main (){
    int array[10];
    printf("Enter the numbers: \n");
    int size = sizeof(array)/sizeof(array[0]);
    for(int c = 0; c < size; c++){
        scanf("%d", &array[c]);
    }
    for(int a = 0; a < size; a++){
        for(int i = 0; i < size - a - 1; i++){
            if(array[i]>array[i+1]){
                int num    = array[i];
                array[i]   = array[i+1];
                array[i+1] = num;
            }
        }
    }
    printf("Least number: %d\n", array[0]);
    printf("Sorted array: ");
    for(int p = 0; p < size; p++){
        printf("[%d] ", array[p]);
    }
    printf("\n");
    return 0;
}