/*Goldbach Conjecture*/

/*Every even integer greater than 2 can be expressed as the sum of two primes*/

/*0-true 1-false*/

#include <stdio.h> //for the print function
#include <string.h>

//prime checker function declaration
int isprime(int a);
int dotheysumto(int x, int y, int z);

int main(){
    int n;
	printf("Enter the number for the conjecture: \n");
	scanf("%d", &n);
    int primes[n/2]; //empty array of primes
    int j; int i=0;
    //checking all the number less than the number if they are prime and adding it to primes[]
    for (j=2; j<n; j++){
        if (j==2){
            primes[i]=2;
            i++;
        }
        if (isprime(j)==0){
            primes[i]=j;
            i++;
        }
    }
    //checking if two primes sum to n and printing them if they do
    printf("These are the prime pairs that sum to %d", n);
    int k; int l;
    for (k=0;k<n/2;k++){
        for (l=k;l<n/2;l++){
            if (dotheysumto(primes[k],primes[l],n)==0){
                printf("%d + %d = %d \n", primes[k],primes[l],n);
            }
        }
    }
}

//naive prime checker
int isprime(int a){
    int i; int b=0;
    for (i=2;i<a;i++){
        if (a%i==0){
            b=1;
        }
    }
    return b;
}

int dotheysumto(int x, int y, int z){
    if (x+y==z){
        return 0;
    } else {
        return 1;
    }
}
