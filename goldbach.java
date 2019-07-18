import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

/* This program is meant to take any integer greater than 2 and
return all of the primes of primes numbers that sum to that number.
*/
public class GoldBach {

    public static void main(String[] args){
            System.out.println("The Goldbach conjecture is...");
            System.out.println("What number would you like to find all the pairs of prime numbers that sum to it?");
            Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            if (n<=2) {
                System.out.println("The number must be great than 2!");
            } else if (n%2!=0){
                System.out.println("The number must be even!");
            } else {
                ArrayList<Integer> primeslist = new ArrayList<Integer>;
                primeslist=primesFinder(n);


            }
            System.out.println(primes);
        }

    }

    //method to determine if a given number is prime
    static boolean isPrime(int a) {
        if (a<2) {
            return false;
        } else {
            for (i=2; i<a; i++){
                if (a%i==0) {
                    return false;
                } else {
                    return true;
                }
            }
        }
    }
    //method to create array list of prime numbers up to n
    static ArrayList<Integer> primesFinder(int n) {
        List<Integer> primes = new ArrayList<>();
        for (i=2; i<=n; i++) {
            if (isPrime(i)=true){
                primes.add(i);
            }
            return primes;
        }
}
