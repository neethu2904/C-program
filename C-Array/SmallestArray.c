/******************************************************************************

                           Smallest element in array

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,size,a[100];
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    int min = a[0];
    for(i=0;i<size;i++){
        if(min>a[i]){
            min=a[i];
        }
    }printf("Smallest elements is %d",min);
}
