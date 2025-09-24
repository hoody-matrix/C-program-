/*
Name:brian kiptoo 
Reg No:PA106/G/29215/25
Description:program for a loan 
*/
#include<stdio.h>

int main(){
    int age,income;
    
    //user input
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your annual income:");
    scanf("%d", &income);
    
    if(age>=21 && income>=21000){
        printf("congratulations,you qualify for a loan");
    }else{
        printf("unfortunately,we are unable to offer you a loan at this time");
    }
    
    return 0;
}    