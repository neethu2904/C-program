/*Read some numbers from the user and find the repeating numbers?
		Eg:
		     Input 	: 2  9  4  6  9  4
		     Output 	: 9  4

*/
#include<stdio.h>
 int main(){
     int a[100],j,i,size,c=0;
     printf("Enter the size");
     scanf("%d",&size);
     printf("Enter the values:");
     for(i=0;i<size;i++){
         scanf("%d",&a[i]);
     }
     printf("Dulpicate elements are:");
     for(i=0;i<size;i++){
         for(j=i+1;j<size;j++){
             if(a[i]==a[j]){
                 c++;
                 break;
             }
         }printf("%d",a[j]);
     }
}