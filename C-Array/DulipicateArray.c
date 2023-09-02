
//Remove duplicates from the array. 
#include <stdio.h>

int main() {
    int a[100]; 
    int i, j,k, limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter elements in the array: ");
    for (i = 0; i < limit; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++)
        {
            if(a[i]==a[j]){
              for(k=j;k<limit-1;k++){
                a[k]=a[k+1];
              }
              limit--;
              j--;
            }
        }
    } 
  printf("\nNew Array");
      for (i = 0; i < limit; i++) {
        printf("%d", a[i]);
    }
}