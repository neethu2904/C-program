#include <stdio.h>
int main()
{
    int a[100],i,j,k=0,b[100],flag =0,pos;
    int n=3;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nNon-Prime Number are:");
   for(i=2;i<n/2;i++){
        if(n%2==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        if(i == a[i]){
            for(i=0;i<n;i++){
                a[i]=a[i+1];
            }
            i--;
            n--;
        }
   }
    printf("Array elements after removing prime numbers:\n");
	for(i=0; i<a[i]; i++){
		printf("%3d\n",a[i]);
	}
	printf("\n");
}