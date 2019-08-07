/*Goldbach Conjecture*/

/*Every even integer greater than 2 can be expressed as the sum of two primes*/

/*0-true 1-false*/

#include <stdio.h>

int isprime(int a);

int main(){
	int j;
	for (j=4; j<20; j++){
		if (isprime(j)==0){
		    printf("%d", j);
		    continue;
		}
    }
}

/*Naive prime checker*/
int isprime(int a){
    int i;
    int f;
    for (i=2; i<a-1; i++){
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
