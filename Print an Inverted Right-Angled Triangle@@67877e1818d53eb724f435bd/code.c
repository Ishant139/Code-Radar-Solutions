#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;a>=i;i++){
        for(int i=0;a>i;i++){
            printf("*\n");
        }
        printf(" ");
    }
    return 0;
}