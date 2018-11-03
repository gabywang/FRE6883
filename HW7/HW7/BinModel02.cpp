#include "BinModel02.h"
#include <iostream>
#include <cmath>
using namespace std;

double BinModel::RiskNeutProb() {
	return (R - D) / (U - D);
}

double BinModel::S(int n, int i) {
	return S0 * pow(1 + U, i)*pow(1 + D, n - i);
}

double BinModel::GetR() {
	return R;
}

double BinModel::GetS0() {
	return S0;
}

double BinModel::GetU() {
	return U;
}

double BinModel::GetD() {
	return D;
}