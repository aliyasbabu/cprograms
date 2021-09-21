#include <stdio.h>
int sum(int num){
    int sum=0,evennum=2;
    if(num==0){
        sum = 0;
    }
    else{
    label : sum = sum + (evennum*evennum);
    evennum = evennum + 2;
    if(evennum<=(num*2)){
        goto label;
    }
}
    printf("Sum of squares of first %d terms is %d",num,sum);
}

int main(){
    int n;
    printf("Enter the number of even numbers of which the sum of squares is to be calculated\n");
    scanf("%d",&n);
    sum(n);
}
