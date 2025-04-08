#include <stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=1;r>=i;i++){
        for(int j=1;j<=i-1;j++){
        printf(" ");}
    
    for(int k=2*i-1;k<=i;i++){
        printf("*");
    }
    }
return 0;
}