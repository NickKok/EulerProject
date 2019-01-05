#include <stdio.h>
#include <cmath>


int main(){
    int n=100;
    long SumofSquare,SquareOfSum,diff; 
    
    SquareOfSum=(n*(n+1))/2;

    SumofSquare=(n*(n+1)*(2*n+1))/6;

    SquareOfSum=pow(SquareOfSum,2);
    diff=SquareOfSum-SumofSquare;
    printf("SquareOfSum=%ld   SumofSquare=%ld and diff=%ld ",SquareOfSum,SumofSquare,diff);    



}