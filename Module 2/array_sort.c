#include<stdio.h>

void arraySort(int array[], int size){
    for (int i = 0; i < size - 1; i++) // indexing starts from 0, hence, size - 1 
    {
        for(int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }       
        }
    }  
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main(){
    int array[]={8,7,4,3,6,9,1,0,2,5}; //10*4 bytes = 40 bytes
    int size = sizeof(array)/sizeof(array[0]); // 40 bytes / 4 bytes = 10 

    arraySort(array, size);

    printArray(array, size);
    
    /*for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }*/
    
    return 0;
}