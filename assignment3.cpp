// Basics of C++

#include <stdio.h>
#include <iostream>

//Average of 3 numbers
int main() {
    double a, b, c;
    std::cout<< "Enter a , b,  c : " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << (a+b+c)/3 << std::endl;
}


//Square of a number
int main() {
    int a;
    std::cout<< "Enter a  : " << std::endl;
    std::cin >> a;
    std::cout << a*a << std::endl;
}


//Swap two numbers witout third variable
int main() {
    int a, b;
    std::cout<< "Enter a, b  : " << std::endl;
    std::cin >> a >> b;
    a = (a+b);
    b = (a-b);
    a = (a-b);
    std::cout << a << " " << b << std::endl;
}


//Max of two numbers
int main() {
    int a, b;
    std::cout<< "Enter a, b  : " << std::endl;
    std::cin >> a >> b;
    int res = a > b ? a : b;
    std::cout << res << std::endl;
}

//Add all numbers of an array
int main() {
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum = 0;
    for(int i =0 ; i<10; ++i) {
        sum += arr[i];
    }
    std::cout<< "Enter sum : " << sum <<  std::endl;
    
}