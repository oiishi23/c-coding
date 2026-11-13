#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("enter the no of rows:");
	scanf("%d",& n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf(" ");
		}
		for(j=n;j>=n-i;j--){
			printf("%d",j);
		}
		for(k=n+1-i;k<=n;k++){
			if(i!=0){
				printf("%d",k);
			}
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--){
		for(j=0;j<n-i-1;j++){
			printf(" ");
		}
		for(j=n;j>=n-i;j--){
			printf("%d",j);
		}
		for(k=n-i+1;k<=n;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	return 0; 
}

