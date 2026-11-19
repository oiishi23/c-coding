#include<stdio.h>
void namaste();
void banjour();
int main(){
    printf("enter i for indian and f for french:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }else{
        banjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste\n");
}
void banjour(){
    printf("Banjour\n");
}