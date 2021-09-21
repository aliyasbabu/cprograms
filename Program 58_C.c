#include <stdio.h>
int main(){
    int option,choice,num,term=1;
    printf("Enter the number of natural numbers to be printed\n");
    scanf("%d",&num);
    if(num==0){
        printf("Nothing to print\n");
    }
    else{
    do{
    printf("Which loop do you prefer to print the numbers?\nEnter 1 for while loop\nEnter 2 for do-while loop\nEnter 3 for for loop\n");
    scanf("%d",&option);
    switch(option){
        case 1 :
        while(term<=num){
            printf("%d\t",term);
            term++;
        }
        break;
        case 2 :
        term=1;
        do{
            printf("%d\t",term);
            term++;
        }while(term<=num);
        break;
        case 3 :
        for(term=1;term<=num;term++){
            printf("%d\t",term);
        }
        break;
        default :
        printf("Invalid entry\n");
    }
    printf("\nDo you wish to repeat it again?\nEnter 1 for Yes or 0 for No\n");
    scanf("%d",&choice);
     }while(choice==1);
    }
}