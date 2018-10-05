#ifndef DefInt_h
#define DefInt_h

/** Create the DefInt class to compute the approximation for a given function f(x).*/
class DefInt {
private:
	double a, b;
	double(*f)(double x);

public:
	DefInt(double _a, double _b, double(*_f)(double x));
	double ByTrapzoid(int N);
	double BySimpson(int N);
};

#endif