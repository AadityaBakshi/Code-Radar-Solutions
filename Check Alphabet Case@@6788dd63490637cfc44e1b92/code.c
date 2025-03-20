#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    
    }
    // else-if(ch>='a' && ch<='z'){
        else{
        printf("Lowercase");
    }
    return 0;
}