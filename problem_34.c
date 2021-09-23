/*
PROBLEM STATEMENT
Write a C program to generate Floyid Triangle using functions

what is floyid triangle?
1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>

//fuction for printing Floyid's Triangle
void printFloyid(int x){
    int i,j,k=1;
    //iritrate through row
    for(i=1;i<=x;i++){
        //for loop for print the number
        for(j=1;j<=i;j++){
            printf("%d\t",k++);
        }
        printf("\n");
    }
}

int main(){
    int rows;
    //take number of  rows from user
    printf("\nEnter the number of rows:");
    scanf("%d", &rows);
    printf("\n");
    printFloyid(rows);
    return 0;
}