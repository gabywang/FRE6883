#ifndef Options03_h
#define Options03_h
//inputting and displaying option data
int GetInputData(int& N, double& K);

//pricing European option
double PriceByCRR(double S0, double U, double D, double R, int N, double K,
	double(*Payoff)(double z, double K));

//computing call payoff
double CallPayoff(double z, double K);

//computing put payoff
double PutPayoff(double z, double K);

/** Computing digital call payoff.*/
double DigitalCallPayoff(double z, double K);

/** Computing digital put payoff.*/
double DigitalPutPayoff(double z, double K);
#endif
