#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
if(a=='a'|| a=='e'|| a=='O'|| a=='i'|| a=='u'){printf("Vowel");}
else if(a>='0' && '9'>=a){printf("Digit");}
else if(a>='a' && 'z'>=a){printf("Consonant");}
else printf("Special Character");
return 0;

}