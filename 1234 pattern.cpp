/*wap to print this pattern
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/
#include<stdio.h> 

int main(){
	int n,i,j,k;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(k=1;k<=n-i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
