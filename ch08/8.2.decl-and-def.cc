#include <iostream>

int f(int);
double sqrt(double d) {return d;}

int main() {
	const int c = 42;
	extern const int c;

	double sqrt(double);

	int i = 7;
	std::cout << f(i) << '\n';	// linking error
	double sqrt(double);
	double sqrt(int);	// allowed (overloaded function)
	int sqrt(double);	// error

	std::cout << sqrt(1.0) << '\n';
}
