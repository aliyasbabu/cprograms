/*
Problem Statement:
program to print multiplication table of a number upto a specific limit using function

Algo:

*/

//solution
#include <stdio.h>

//fun declaration and intialization
void multiply(int num,int limit){
    int i;
    for(i=1;i<=limit;i++){
        printf("\n%d x %d = %d",i,num,(num*i));
    }
}

int main(){
    int limit , number;
    //read n
    printf("Enter the limit:");
    scanf("%d", &limit);
    printf("\nEnter the number:");
    scanf("%d", &number);
    //call the function
    multiply(number,limit);

    return 0;
}