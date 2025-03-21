#include<stdio.h>
int main(){
    int a,b;
     scanf("%d",&a);
      scanf("%d",&b);
      if(a>=18){
        printf("Eligible");
        if(b==1){
            printf("citizen");
        }
      }
      else{
        printf("Not Eligible");
      }
    return 0;
}