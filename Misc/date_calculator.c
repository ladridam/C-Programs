#include<stdio.h>

int fn_year(int year){
    return(year%4==0 && (year%100!=0 || year%400==0));
}

int daysofMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int convert(int year, int month, int days ){
    int totalDays = 0;
    for(int i = 1; i < year; i++){
        totalDays += fn_year(i) ? 366 : 365;
    }
    for(int i = 0; i < month - 1; i++){
        totalDays += daysofMonths[i];
    }
    if(fn_year(year) && month > 2){
        totalDays += 1;
    }
    totalDays += days;
    return totalDays;
}

int main (){
    int start_year, start_date, start_month;
    int end_year, end_date, end_month;
    printf("Start date (YYYY/MM/DD): ");
    scanf("%d %d %d", &start_year, &start_month, &start_date);
    printf("\nEnd date (YYYY/MM/DD): ");
    scanf("%d %d %d", &end_year, &end_month, &end_date);

    int total_start_date = convert(start_year, start_month, start_date);
    int total_end_date = convert(end_year, end_month, end_date);

    if (total_end_date < total_start_date)
    {
        printf("\nHappened %d ago", total_start_date-total_end_date);
    }
    printf("\nNumber of days left: %d", total_end_date-total_start_date);
    
}
