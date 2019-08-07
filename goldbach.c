/*Goldbach Conjecture*/

/*Every even integer greater than 2 can be expressed as the sum of two primes*/

/*0-true 1-false*/

#include <stdio.h>

int isprime(int a);

int main(){
    int c=31;
    int primes[10];
    int i;
    for (i=2;i<10;i++){
      if (isprime(i)==0){
           primes[i]=i;
           printf("%d",i);
	      printf("%d",isprime(i));
        }
    }
	
}

/*Naive prime checker*/
int isprime(int a){
    int i;
    int f;
    for (i=2; i<a; i++){
        if (a%i==0){
            f=1;
        }
    }
    if (f==1){
        return 1;
    } else {
        return 0;
    }
}
