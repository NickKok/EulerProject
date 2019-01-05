#include <stdio.h>



int main(){
    long biggerNum;
    long number,reverse=0,temp,digit;
    for(int i=100;i<1000;i++){
        for(int j=100 ; j <1000; j++){
            number=i*j;
            temp=number;
            reverse=0;
            do{
                digit= temp%10;
                reverse=(reverse *10)+digit;
                temp=temp/10;

            }while(temp!=0);

            if(reverse==number && number > biggerNum){
                biggerNum=number;
            }
        }
    } 
    printf("bigger Number is:%ld",biggerNum);

}