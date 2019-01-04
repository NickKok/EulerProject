#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

#define size 20



struct stack{
    long item;
    long stack[size];
}s;

int top=-1;


void push(int item){
    if(top==size-1){
        cout<<"stack is full";
    }
    else{
        top=top+1;
        s.stack[top]=item;
    }

}
void display(){

    for(int i=top; i>=0;i--){
        printf("stack=: %ld \n", s.stack[i]);
    } 
}


int main(){
    long wantedNumber=600851475143;
    long num=3;
    while(wantedNumber>1){
        bool prime=true;
        for(long i=2;i<num/2;i++){
            if( num%i==0){
                prime=false;
                break;
            }
        }
        if(prime==true){

            if(wantedNumber%num==0){
                wantedNumber=wantedNumber/num;
                push(num);
            }
        }
        num++;


    }
    display();
}