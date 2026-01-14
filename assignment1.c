/*
    Revisiting C Language
*/

//C program to check a given number even or odd

#include <stdio.h>
#include <math.h>

int isEven(int num) {
    if(num%2 == 0) {
        return 1;
    } 
    return 0;
    
}

int main() {
    int num; 
    printf("Enter the Number");
    scanf("%d", &num);
    int val = isEven(num);
    if(val) {
        printf("Number is Even");
    } else {
        printf("Number is Odd");
    }
    return 0;
}

//Factorial of a number

int fact(int n) {
    if(n == 0 || n==1) {
        return 1;
    }
    return n*fact(n-1);
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int val = fact(n);
    printf("%d",val);
}


// //Swap two variables

int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    a = (a+b);
    b = (a-b);
    a = (a-b);
    printf("Swap Number are : ");
    printf("%d, %d", a, b);
}


//prime of two numbers

int isPrime(int num) {
    int res;
    for(int i=2; i< sqrt(num); ++i) {
        if(num%i == 0) {
            res = 0;
            return res;
        }
    }
    return res = 1;
}

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int res = isPrime(a);
    if(res == 1) {
        printf("Prime Number ");
    } else {
        printf("Not Prime Number ");
    }
}


//LCM of two numbers

int main() {
    int a, b;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);
    int lcm;
    for(lcm = a>b ? a : b; lcm <= a*b; ++lcm) {
        if(lcm%a == 0 && lcm%b == 0) {
            break;
        }
    }
    printf("lcm is %d", lcm);
}