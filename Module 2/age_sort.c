#include<stdio.h>
int main(){
    int age_Ram, age_Shyam, age_Ajay;
    printf("Enter age\n");
    printf("Ram: ");
    scanf("%d", &age_Ram);
    printf("\nShyam: ");
    scanf("%d", &age_Shyam);
    printf("\nAjay: ");
    scanf("%d", &age_Ajay);

    if(age_Ram < age_Shyam && age_Ram < age_Ajay){
        printf("Youngest: Ram age %d ", age_Ram);
    }else if(age_Shyam < age_Ram && age_Shyam < age_Ajay){
        printf("Youngest: Shyam age %d", age_Shyam);
    }else{
        printf("Youngest: Ajay %d", age_Ajay);
    }
    return 0;
}