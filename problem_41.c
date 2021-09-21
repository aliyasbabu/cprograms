/*
PROGRAM STATEMENT

Menu driven program to perform the following 
1)Given array in reverse order 
2)print the array 
3) print the biggest and smallest element in the array
4)Convert all elements into -1 
5) Exit

*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100],rev[100];
    int size,i,choice,j,c,temp,option;
    do{
    
    printf("Enter the size of the array");
    scanf("%d",&size);
    
    printf("Enter the array elements");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\n Enter your choice: \n 1  reversed array\n 2  printing your array\n 3  biggest and smallest element in the array\n 4  To convert all the even numbers into -1\n 5  Exit");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
                printf("THE REVERSED ARRAY IS:\n");
                c=1;
                for(i=0;i<size;i++){
                    rev[i]=arr[size-c];
                    c++;
                }
                for(i=0;i<size;i++){
                printf("\t%d",rev[i]);
                }
                break;
                
        case 2:        
                printf("\nTHE ENTERED ARRAY IS:");
                for(i=0;i<size;i++){
                   printf("\t%d",arr[i]);
                }
                break;
        case 3: 
                for(i=0;i<size-1;i++){
                    for(j=i+1;j<size;j++){
                        if(arr[i]>arr[j]){
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }
                printf("\nTHE SMALLEST ELEMENT IN THE ARRAY IS:%d",arr[0]);
                printf("\nTHE LARGEST ELEMENTIN THE ARRAY IS :%d",arr[size-1]);
                
                break;
        
        case 4: 
               for(i=0;i<size;i++){
                   if(arr[i]%2==0){
                       arr[i]=-1;
                   }
               }
               printf("\nTHE ARRAY AFTER PUTTING THE -1 TO ALL EVEN NUMBERS IS:");
               for(i=0;i<size;i++){
                   printf("\t%d",arr[i]);
               }
               break;
        case 5:
               exit(0);
               break;
               default:printf("INVALID CHOICE");
    }
               
               printf("\n DO YOU WANT TO CONTINUE IF YES PRESS 1");
               scanf("%d",&option);
    
               }while(option==1);
    return 0;
}


