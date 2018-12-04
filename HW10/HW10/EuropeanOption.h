// EuropeanOption2.h
//
// Class that represents  solutions to European options. This is
// an implementation using basic C++ syntax only. It has been 
// written for pedagogical reasons
//
// (C) Datasim Component Technology BV 2003-2006
//

#ifndef EuropeanOption_h
#define EuropeanOption_h


#include <string>
using namespace std;

class EuropeanOption
{
public:                // For TEST purposes only


	// 'Kernel' functions for option calculations
	double CallPrice() const;
	double PutPrice() const;
	double CallDelta() const;
	double PutDelta() const;
	double CallGamma() const;
	double PutGamma() const;
	double CallVega() const;
	double PutVega() const;

private:
	// Gaussian functions
	double n(double x) const;
	double N(double x) const;


	double r;        // Interest rate
	double sig;    // Volatility
	double K;        // Strike price
	double T;        // Expiry date
	double U;        // Current underlying price (e.g. stock, forward)
	double b;        // Cost of carry

	char optType;    // Option name (call, put)
	char *unam;    // Name of underlying asset


public:    // Public functions
	EuropeanOption();                            // Default call option
	EuropeanOption(const EuropeanOption& option2);    // Copy constructor
	EuropeanOption(const char& optionType);    // Create option type
	EuropeanOption(double r_, double sig_, double K_, double T_, double U, char optType_);
	EuropeanOption(const char*OptName);
	double Ubydvd(double D, double T);// calculate stock price considering stock dividend

	virtual ~EuropeanOption();

	EuropeanOption& operator = (const EuropeanOption& option2);

	// Functions that calculate option price and sensitivities
	double Price() const;
	double Delta() const;

	// Modifier functions
	void toggle();        // Change option type (C/P, P/C)


};

#endif
