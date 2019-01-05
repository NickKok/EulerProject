#include <stdio.h>


int main(){

    long number=2400;
    long smallestNum;
    bool criteria;
    while(true){
        criteria=true;
        for(int i=1;i<=20;i++){
            if(number%i!=0){
                criteria=false;
                break;
            }
        }
        if(criteria==true){
            smallestNum=number;
            break;
        }

        number=number+1;
    }

    printf("The smallest number is: %ld",smallestNum);
}