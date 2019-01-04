#include <stdio.h>



int main(){
    int sum=2;
    int t1=1;
    int t2=2;
    int next;

    while(true){
        next=t1+t2;
        t1=t2;
        t2=next;
        if(next>4000000){
            break;
        }
        else{
            if(next%2==0){
                sum=sum+next;
            }
        }

    }
    printf("sum= %d",sum);

}