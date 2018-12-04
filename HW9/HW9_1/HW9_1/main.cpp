
#include "BinModel02.hpp"
#include <iostream>
#include <iomanip>
#include "PathDepOption01.hpp"
using namespace std;

int main()
{
    double S0=106.0;
    double r=0.058;
    double sigma=0.46;
    double T=9.0;
    double K=100.0;
    int N1=12;
    cout << setiosflags(ios::fixed) << setprecision(4);
    
    BSModel Model(S0,r,sigma);
    
    EurCall CallOption(T/N1,K);
    EurPut PutOption(T/N1,K);
    
    long N2=30000;
    cout << "Eur Call Price = "
    << CallOption.PriceByMC(Model,N2) << endl;
    
    cout << "Eur Put Price = "
    << PutOption.PriceByMC(Model,N2) << endl;
    
    return 0;
}

/*
 Eur Call Price = 21.6420
 Eur Put Price = 11.1852
*/
