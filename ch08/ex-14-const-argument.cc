#include <iostream>
using std::cout;
using std::endl;

/**
 * We can see passing a const argument to a function is allowed. But it is rarely used.
 * Because by passing a non-reference argument (whether const or not), the parameter is
 * copied by value, and the calling parameter will never be changed by the function. So
 * the caller does not care whether or not the argument is changed inside the function.
 */
int f(const int x) {    // allowed
    // x = x + 1;       // not allowed
    return x+1;
}

int main() {
    cout << "f(1) = " << f(1) << endl;
    cout << "f(143) = " << f(143) << endl;

    int i = 7;
    cout << "f(i) = " << f(i) << endl;
}
