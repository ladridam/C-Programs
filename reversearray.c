#include<stdio.h>
int main (){
    //initiallizing an array
    char arr[][2] = {{'A', 'a'}, {'B', 'b'}, {'C', 'c'}};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n-1; i>=0; i--)
    {
        printf("%c%c", arr[i][0], arr[i][1]);
    }
    return 0;
    
}