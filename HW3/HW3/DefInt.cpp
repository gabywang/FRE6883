#include "DefInt.h"

/** The constructor function of DefInt.*/
DefInt::DefInt(double _a, double _b, double(*_f)(double x)) {
	a = _a;
	b = _b;
	f = _f;
}

/** The Trapezoid approximation function.*/
double DefInt::ByTrapzoid(int N) {
	double h = (b - a) / N;
	double sum = f(a);
	for (int k = 1; k < N; k++) {
		sum += 2 * f(a + h * k);
	}
	sum += f(b);
	return ((b - a)*sum) / (2 * N);
}

/** The Simpson approximation function.*/
double DefInt::BySimpson(int N) {
	return (b - a)*(f(a) + 4 * f((a + b) / 2) + f(b)) / 6;
}