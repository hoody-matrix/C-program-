/*
Name:brian kiptoo 
Reg no:PA106/G/29215/25
Description:c program to calculate volume and surface area of a cylinder 
*/
#include<stdio.h>

int main(){
   const float pie=3.142;
    float r;
    float h;
    
    //user input
    printf("Enter radius of the cylinder:");
    scanf("%f" ,&r);
    
    printf("Enter the height of the cylinder:");
    scanf("%f" ,&h);
    
    //calculate volume
    float volume;
    volume=(pie*r*r*h);
    printf("volume = %f \n",volume);
  
    //calculate surface area 
    float surface_area;
    surface_area= (2*pie*r*r+2*pie*r*h);
    printf("Surface Area =%f \n",surface_area);
    
    return 0;
    }
     