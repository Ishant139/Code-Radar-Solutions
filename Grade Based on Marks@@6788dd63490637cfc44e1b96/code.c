#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a >=90){printf("A");}
else if(a >= 80 && 90>a){printf("B");}
else if(a >= 70 && 80>a){printf("C");}
else if(a >= 60 && 70>a){printf("D");}
else printf("F");
return 0;
}