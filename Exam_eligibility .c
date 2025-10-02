#include<stdio.h>

int main(){
    float attendancepercentage, averagemarks;
    
    
    //input attendance percentage 
    printf("enter attendance percentage:");
    scanf("%f", &attendancepercentage);
    
    
    //input average marks 
    printf("enter average marks:");
    scanf("%f", &averagemarks);
    
    
    //check eligibility 
    if (attendancepercentage >= 75.0 && averagemarks >= 40.0) {
        printf("eligible for final exam.\n");
    } else {
        printf("not eligible.\n");
    }    
    
    
    return 0;
}