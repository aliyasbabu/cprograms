/*
PROBLEM STATEMENT
Write a C Menu Driven Programe to covert the following
1.Decimal to Binery
2.Binery to Decimal
3.Exit
*/

#include <stdio.h>
#include<stdlib.h>
//function for converting decimal to Binery
void DecToBin(int n){
    /*Concept Used:
       First get the reminder of the number with 2 and store the
       remider in an array.Then divide the number by 2 and continue 
       upto the number reaches zero
    */
   //array declaration
   int arr[10];
   int i=0;
   //find the remider and store it into an array
   for(i=0;n>0;i++){
       arr[i]=n%2;
       n = n/2;
   }
   //print the number in binery format
   //as we know the binery reads from right to left
   //so print the array in reverse order
   //from the above for loop we get the correct size of array ie i.
   printf("\nNumber in binery format is :  ");
   for(i=i-1;i>=0;i--){
       printf("%d",arr[i]);
   }
}

int main(){
    int num,option,choice;
    do
    {
        printf("\nEnter the Number :");
        scanf("%d", &num);
        printf("\nSelect which action you want to perform:");
        printf("\n\tEnter 1 for Decimal to Binery\n\tEnter 2 for Binery to Decimal\n\tEnter 3 for exit");
        printf("\nEnter here:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            DecToBin(num);
            break;
        case 2:
            /* code */
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nInvalid Option");
            break;
        }
        printf("\nDo you want to continue ? If yes enter 1 here:");
        scanf("%d", &choice);
    } while (choice==1);
    
    return 0;
}