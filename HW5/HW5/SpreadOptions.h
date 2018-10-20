#ifndef SpreadOptions_h
#define SpreadOptions_h
#include "Options06.h"

class StrangleOpt :public EurOption {
private:
	double K1, K2;
public:
	int GetInputData();
	double Payoff(double z);
};

class ButterflyOpt :public EurOption {
private:
	double K1, K2;
public:
	int GetInputData();
	double Payoff(double z);
};
#endif