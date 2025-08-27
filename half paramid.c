#include<stdio.h>
int main(){
    int n,m;
    printf("the number of rows is: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}