#include <stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=1;r>=i;i++){
        for(int j = r-1;j>=i;j--){
        printf(" ");}
    
    for(int k= 1;k<=2*i-1;i++){
        printf("*");
    }
    }
return 0;
}