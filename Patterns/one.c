#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
/*Pattern observed: 
012345
01234
0123
012
01
0
*/