/*Write a program to accept an array and display it on the console using functions
Program should contain 3 functions including main() function
main()
Declare an array
Call function getArray()
Call function displayArray()
		getArray()
Get values to the array
		displayArray()
Display the array values
*/


#include <stdio.h>
void getArray();
void displayArray();

int main()
{
    int a[100],i,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    getArray(a,size);
    displayArray(a,size);
    return 0;
}
void getArray(int a[],int size){
    printf("Enter the values of Array");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}
void displayArray(int a[],int size){
    int i;
    printf("Arrays are:");
        for(i=0;i<size;i++){
            printf("%d\t",a[i]);
        }
        
}