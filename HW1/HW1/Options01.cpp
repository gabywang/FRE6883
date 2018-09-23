#include "Options01.h"
#include "BinModel01.h"
#include <iostream>
#include <cmath>
using namespace std;

int GetInputData(int& N, double& K) {
	cout << "Enter steps to expiry N: "; cin >> N;
	cout << "Enter strike price K:    "; cin >> K;
	cout << endl;
	return 0;
}

double CallPayoff(double z, double K) {
	if (z > K) return z - K;
	return 0.0;
}

/* Calculate the factorial given an integer.*/
int Factorial(int N) {
	if (N > 1) {
		return N * Factorial(N - 1);
	}
	return 1;
}
/* Apply the CRR procedure to compute the time 0 price of an European option.*/
double PriceByCRR(double S0, double U, double D, double R, int N, double K) {
	double q = RiskNeutProb(U, D, R);
	double Price[100];
	for (int i = 0; i <= N; i++) {
		Price[i] = CallPayoff(S(S0, U, D, N, i), K);
	}
	double sum = 0;
	for (int i = 0; i <= N; i++) {
		sum += Factorial(N) / (Factorial(i) * Factorial(N - i)) * pow(q, i)*pow(1 - q, N - i) * Price[i];
	}
	return sum / (pow(1 + R, N));
}