#include<stdio.h>

#define ROWS 3 // i represents rows in matrix
#define COLS 3 // j represents columns in matrix

void AddMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j]=A[i][j]+B[i][j];
        }
        
    }
    
}
void SubMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j]=A[i][j]-B[i][j];
        }
        
    }
    
}
void MulitplyMatrix(int A[ROWS][COLS],int B[ROWS][COLS], int result[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++)
            {
                result[i][j] += A[i][k]*B[k][j];
            }
            
        }
        
    }
    
}
void PrintMatrix(int Mat[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {

        for (int j= 0; j < COLS; j++)
        {
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int matrixA[ROWS][COLS]={{1,2,3}, {4,5,6}, {7,8,9}};
    int matrixB[ROWS][COLS]={{9,8,7}, {6,5,4}, {3,2,1}};
    int resultMatrix[ROWS][COLS];

    printf("Matrix A: \n");
    PrintMatrix(matrixA);
    printf("Matrix B: \n");
    PrintMatrix(matrixB);

    AddMatrix(matrixA, matrixB, resultMatrix);
    printf("\nMatrix A + Matrix B = \n");
    PrintMatrix(resultMatrix);

    SubMatrix(matrixA, matrixB, resultMatrix);
    printf("\nMatrix A - Matrix B = \n");
    PrintMatrix(resultMatrix);

    MulitplyMatrix(matrixA, matrixB, resultMatrix);
    printf("\nMatrix A x Matrix B = \n");
    PrintMatrix(resultMatrix);

    return 0;
}