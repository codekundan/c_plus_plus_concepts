#include <iostream>

void f1(int, int); // call by value. Normal Formal arguments
void f2(int *, int *); // call by address or call by reference in C but only call by address in C++. Pointer Formal arguments. 
void f3(int &, int&); // call by reference in C++. Refernce Formal arguments.

int main() {
    int a = 10, b=21;

    // f1(a,b);
    std::cout << &a << " , " << &b << std::endl; 
    f2(&a, &b);
    // f3(a, b);

    std::cout << a << " , " << b << std::endl;
    
}

void f1(int x, int y) {
    x++; y++;
}

void f2(int *p, int* q) {
    std::cout << p << " , " << q << std::endl;
    std::cout << ++p << " , " << ++q << std::endl;
    *p++; *q++; // ++ has higher precedence than *. So best is (*p)++ and (*q)++
}

void f3(int &m, int &n) {
    m = 45;
    n = 93;
}