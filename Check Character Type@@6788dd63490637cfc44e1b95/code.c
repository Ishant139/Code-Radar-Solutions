#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
if(a=='a'|| a=='e'|| a=='o'|| a=='i'|| a=='u'){printf("Vowel");}
else if(a>='0' && '9'>=a){printf("Digit");}
else printf("Special Character");
return 0;

}