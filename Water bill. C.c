#include<stdio.h>

int main(){
    int units;
    float bill;
    
    // prompt user for input 
    printf("enter the number of water units consumed:");
    scanf("%d", &units);
    
    
    //calculate bill using if-else if-else 
    if (units <=30) {
        bill = units * 20.0;
    } else if (units <= 60) { 
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else { 
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    } 
    // display total bill with two decimal places 
        printf("total water bill: %.2f KES\n",bill);
    
    
    return 0;
}