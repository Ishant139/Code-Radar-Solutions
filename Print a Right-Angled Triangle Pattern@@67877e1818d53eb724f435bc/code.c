#include <stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=1;r>=i;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}