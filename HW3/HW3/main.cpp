#include "DefInt.h"
#include <iostream>
using namespace std;

/** Define a specific function.*/
double f(double x) {
	return x * x*x - x * x + 1;
}

int main() {
	int N;
	cout << "Please enter the step N:" << endl;
	cin >> N;
	DefInt MyInt(1.0, 2.0, *f);
	cout << "Computing the trapezoidal approximation:" << endl;
	cout << MyInt.ByTrapzoid(N) << endl;
	cout << "Computing the simpson approximation:" << endl;
	cout << MyInt.BySimpson(N) << endl;
	return 0;
}

/* Print the output
Please enter the step N:
100
Computing the trapezoidal approximation:
2.41673
Computing the simpson approximation:
2.41667
*/