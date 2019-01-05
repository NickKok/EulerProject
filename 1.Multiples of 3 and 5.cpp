#include <stdio.h>


int main(){
    int sum=0;
    for(int i=1; i<1000; i++){
         if(i%3==0 || i%5==0){
             //printf("i =%d",i);
             sum=sum+i;
         }
          
    }
    printf("sum=%d",sum);
}
