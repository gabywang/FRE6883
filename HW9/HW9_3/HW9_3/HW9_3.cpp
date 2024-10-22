
#include <iostream>
#include "PathDepOption04.h"
#include "GmtrAsianCall.h"
using namespace std;

int main() {
	double S0 = 100.0, r = 0.03, sigma = 0.2;
	double T = 1.0 / 12.0, K = 100.0;
	int m = 30;
	long N = 30000;
	double epsilon = 0.001;

	BSModel Model(S0, r, sigma);
	ArthmAsianCall Option(T, K, m);
	GmtrAsianCall  CVOption(T, K, m);

	//current object  this = &Option
	Option.PriceByVarRedMC(Model, N, CVOption, epsilon);
	cout << "Arithmetic call price = " << Option.Price << endl 
		<< "Error = " << Option.PricingError <<endl
		<<"delta = "<<Option.delta << endl << endl;
	Option.PriceByMC(Model, N, epsilon);
	cout << "Price by direct MC = " << Option.Price << endl 
		<< "Error = " << Option.PricingError << endl
		<<"delta = " <<Option.delta<< endl;
	return 0;
}

/*
Arithmetic call price = 1.42599
Error = 0.000135853
delta = 0.519882

Price by direct MC = 1.42393
Error = 0.0120317
delta = 0.525866
*/
