//Functions in C++

#include <stdio.h>
#include <iostream>
#include <Math.h>

//Print prime numbers between two numbers

 int isPrime(int num) {
    int res;
    for(int i=2; i<= sqrt(num); ++i) {
        if(num%i == 0) {
            res = 0;
            return res;
        }
    }
    return res = 1;
}

void printPrimeNumbers(int a, int b) {
    int big = a > b ? a : b;
    int small = a < b ? a : b;
    for(int i = small; i < big; ++i) {
        int val = isPrime(i);
        if(val == 1) std::cout << i << " " << std::endl; 
    }
}

int main() {
    int a, b;
    std::cout<< "Enter a, b  : " << std::endl;
    std::cin >> a >> b;
    printPrimeNumbers(a, b);
}


//Highest value digit in a number

void printHighestValueDigit(int n) {
    int max = 0;
    while(n > 0) {
        int unit = n%10;
        max = unit > max ? unit : max;
        n/=10; 
    }
    std::cout << "Max digit : " << max << std::endl;
}

int main() {
    int a;
    std::cout<< "Enter a : " << std::endl;
    std::cin >> a;
    printHighestValueDigit(a);

}


//Calculate x raised to power y

void raiseToPower(int x, int y) {
    int res = 1;
    for(int i = 0; i<y; ++i) {
        res = res*x;
    }
    printf("%d", res);
}

int main() {
    int a, b;
    std::cout<< "Enter a, b: " << std::endl;
    std::cin >> a >> b;
    raiseToPower(a, b);

}


// Check a given number Ficbonnaci term or not
int fibonacciTerm(int n) {
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = fib1 + fib2;

    while(fib3 <= n) {
        if(fib3 == n) {
            return 1;
        }
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;

    }
    return 0;
}

int main() {
    int a;
    std::cout<< "Enter a : " << std::endl;
    std::cin >> a ;
    int res = fibonacciTerm(a);
    if(res == 1) {
        printf("Fibonacci Term");
    } else {
        printf("Not Fibonacci Term");
    }

}


// Print Pascal Triangle upto N lines

void printPascalTriangle(int n) {
    
}

int main() {
    int n;
    std::cout << "Enter the number " << std::endl;
    printPascalTriangle(n);
}