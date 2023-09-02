/******************************************************************************

                         Prime num in array
*******************/
#include <stdio.h>
int main()
{
    int a[100],i,j,k=0,prime[100],flag =0,size,result;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter elements :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are :");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("\nPrime Number are:");
   for(i=0;i<size;i++){
       for(j=2;j<a[i];j++){
        if(a[i]%2==0){
            flag=1;
        }
       }
        if(flag==0){
            prime[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        printf("%d ", prime[i]);
    }
}
