// TestEuropeanOption.cpp
//
// Test program for the exact solutions of European options. 
// Check answers with Haug 1998
//
// (C) Datasim Component Technology BV 2003-2006
//

#include "EuropeanOption.h"
#include <iostream>

int main()
{ // All options are European

	// Call option on a stock
	EuropeanOption callOption;
	cout << "Call option on a stock: " << callOption.Price() << endl;
	
	double r = 0.1;
	double sig = 0.3;
	double K = 50;
	double T = 0.25;
	double U = 50;
	char optType = 'P';

	EuropeanOption putoption(r, sig, K, T, U, optType);
	cout << "HW Q1:" << putoption.PutPrice() << endl;
	double D = 1.5;
	double T2 = 2.0 / 12;
	cout << "U = " << putoption.Ubydvd(D, T2) << endl;
	cout << "HW Q2:" << putoption.PutPrice() << endl;

}
/* Output:
Call option on a stock: 2.13293
HW Q1:2.37561
U = 48.5248
HW Q2:3.03039
*/
