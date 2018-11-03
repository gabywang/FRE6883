#ifndef BinModel02_h
#define BinModel02_h

class BinModel {
private:
	double S0, U, D, R;
public:
	double RiskNeutProb();
	double S(int n, int i);
	double GetR();
	double GetS0();
	double GetU();
	double GetD();
	int GetInputData();
};

#endif // !BinModel02_h
