// Basics of C++

#include <stdio.h>
#include <iostream>

// //Sum of two numbers
int main() {
    int a , b;
    std::cout<< "Enter two numbers : " << std::endl;
    std::cin >> a >> b;
    std::cout << a+b << std::endl;
}


//Area of a circle
int main() {
    int r;
    std::cout<< "Enter raduis : " << std::endl;
    std::cin >> r;
    std::cout << 3.14*r*r << std::endl;
}


//Volume of a cubiod
int main() {
    int l, b, h;
    std::cout<< "Enter l , b, h : " << std::endl;
    std::cin >> l >> b >> h;
    std::cout << l*b*h << std::endl;
}
