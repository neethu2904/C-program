#include <stdio.h>
int main(){
int i,j,n=5;
for(i=n;i>=0;i--){
	for(j=1;j<=i;j++){
		if(i!=j)
			printf("%d",j);	
	}printf("\n");
}
}