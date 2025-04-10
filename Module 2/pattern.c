#include<stdio.h>
void main(){
    int row=5, col=5, num=1;
    for(int i=1; i<=row; i++){
        for(int j=num; j<=num+1; j++){
            printf("%d", j);
        }
        num++;
        printf("\n");
    }
}