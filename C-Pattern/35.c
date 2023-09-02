#include<stdio.h>
int main(){
    int i,j,s,size,k,mid=1,m=0;
    printf("Enter the size");
    scanf("%d",&size);
    for(i=1;i<=size;i++){
        for(s=0;s<=size-i;s++){
            printf(" ");
        }for(j=1;j<=2*i-1;j++){
            if(j<=mid+1){
                m=64+j;
                printf("%c",m);
            }else{
                m=m-1;
                mid= ((i*2-1)+1)/2;
                printf("%c",m);
            }
        }printf("\n");
        
    }
}

  
