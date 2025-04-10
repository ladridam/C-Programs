#include<stdio.h>
float profit_loss(float sp, float cp){
    if (sp>cp)
    {
        return sp-cp;
    }
    return cp-sp;
}
int main(){
    float sp, cp;
    printf("Please enter the Cost Price: ");
    scanf("%f", &cp);
    printf("\nPlease enter the Selling Price: ");
    scanf("%f", &sp);

    if(sp>cp){
        printf("\nProfit: %f", profit_loss(sp, cp));
    }
    else{
        printf("\nLoss: %f", profit_loss(sp, cp));
    }
    return 0;
}