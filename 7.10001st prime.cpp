#include <stdio.h>


int main(){


long maxnumber=200000;
bool isprime=true;
long numberPrinme=0;
long primeCount=1;

for (int i=3;i<=maxnumber;i++){
    isprime=true;
    for (int j=2;j<i;j++){
            if(i%j==0){
                isprime=false;
                //break;
            }

    }
    if(isprime==true && i>numberPrinme){

        numberPrinme=i;
        primeCount=primeCount+1;

    }
    if(primeCount==10001){
        break;
    }


}
 printf("prime number=%ld  number of itterations=%ld",numberPrinme, primeCount);

}