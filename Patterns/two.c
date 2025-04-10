#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) //goes downward from n to 0, and counts for rows
    {
        for (int j = 1; j < i; j++) //prints 0s, also j counts for the columns
        {
            printf("0");
        }
        printf("%d\n", i);
    }
}
/*
Pattern output:
0...n
0004
003
02
1

*/