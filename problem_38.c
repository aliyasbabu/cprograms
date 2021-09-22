/*
problem statement
Menu driven program to evaluate Sin(X) and Cos(X).
use functions to implement
*/

#include<stdio.h>
#include<math.h>
float sine(float rad);
float cose(float rad);

int main(){
    float angle,c,rad,a;
    int choice;
    
    printf("Enter the angle");
    scanf("%f",&angle);
    
    a=3.14159265359/180;
    rad=angle*a;
    
    printf("Enter your choice\n 1) sin function\n 2) cos function");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
               printf("The value of sin%.1f is %.3f",angle,sine(rad));
               break;
        case 2:
               printf("The value of cos%.1f is %.3f",angle,cose(rad));
               break;
               
        default:
                printf("Invalid choice");
    }
    return 0;
}
float sine(float rad){
    float s;
    s=sin(rad);
    return s;
}
float cose(float rad){
    float c;
    c=cos(rad);
    return c;
}
