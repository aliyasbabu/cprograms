/*
PROBLEM STATEMENT:
program to reverse a string without using string handling 
functions, write a separate function to reverse a string

*/
#include <stdio.h>
#include <string.h>
//fuction for reverse a string
void revString(char a[]){
   char temp;
	int i, j, n;
	n = strlen(a);

	// swapping string[i] and string[j] until i<j
	for (i = 0, j = n - 1; i < j; ++i, --j) {
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
    printf("\nReversed String is %s",a);

}
int main(){
    char string[50];
    //read string
    printf("\nEnter the string wants Reverse:");
    scanf("%s", &string);
    revString(string);
    return 0;
}