

//Find unique elements in an array
#include <stdio.h>

int main() {
    int a[100], b[100] = {0}; 
    int i, j, limit, count;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter elements in the array: ");
    for (i = 0; i < limit; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements are: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", a[i]);
    }
    for(i=0;i<limit;i++){
        int count=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                    count++;
                   break;
            }
        }
            if(count=0){
                b[j]=a[i];
            } 
            
        }
	for(i=0;i<b[j];i++)
            {
                 printf("\nUnique Elements are: %d",a[i]);
            }
    
}
          
        
    

