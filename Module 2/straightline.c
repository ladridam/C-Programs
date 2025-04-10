#include<stdio.h>
int main(){
    int p[3][2];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &p[i][0], &p[i][1]);
    }
    float s1 = (float)(p[1][1]-p[0][1]/p[1][0]-p[0][0]);
    float s2 = (float)(p[2][1]-p[1][1]/p[2][0]-p[1][0]);

    if(s1 == s2 || p[1][1]-p[0][1] == 0 && p[2][1]- p[1][1] == 0){
        printf("Points are on a straight line");
    } else {
        printf("Points are not on a straight line");
    }
    return 0;
}