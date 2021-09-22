/*
PROGRAM STATEMENT
Prgram to find sum of digit using recursion
*/

#include<stdio.h>
int sum(int num);
int main(){
    int num;
    
    printf("Enter the number to find the sum of digit");
    scanf("%d",&num);
    
    printf("The sum of digit is %d",sum(num));
    return 0;
}
int sum(int num){
    if(num==0){
        return 0;
    }else{
        return (num%10+sum(num/10));
    }
}

