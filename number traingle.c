#include<stdio.h>
int main(){
    int i,j,k,l,n;
    printf("\n Enter the number of line:");
    scanf("%d",& n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        //decreasing loop
        for(j=n;j>=n-i+1;j--){
            printf("%d",j);
        }
        //increasing loop
        for(l=n-i+2;l<=n;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}