
#ifndef BSModel01_h
#define BSModel01_h

#include <vector>
#include <cstdlib>
#include <ctime>// for srand()
using namespace std;

typedef vector<double> SamplePath;
class BSModel {
public:
    double S0, r, sigma;
    BSModel(double S0_, double r_, double sigma_) {
        S0 = S0_; r = r_; sigma = sigma_;
        srand(time(NULL));
    }
    void GenerateSamplePath(double T, int m, SamplePath& S);
};


#endif /* BSModel01_h */
