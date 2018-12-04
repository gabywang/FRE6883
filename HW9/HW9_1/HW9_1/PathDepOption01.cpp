
#include "PathDepOption01.h"
#include "BSModel01.h"
#include <iostream>
#include <cmath>

double PathDepOption::PriceByMC(BSModel Model, long N) {
    double H=0.0;
    SamplePath S(m);//One sample path, one BSModel and always reuse it
    for(long i=0; i<N; i++) {
        Model.GenerateSamplePath(T,m,S);
        //this -> PayOff(); because of virtual function. ‘this’ points to the current address
        H = (i/(i+1.0))*H + Payoff(S)/(i+1.0);
    }
    return exp(-Model.r*T)*H;
}

double ArthmAsianCall::Payoff(SamplePath& S) {
    double Ave=0.0;
    for (int k=0; k<m; k++){
        Ave=(k/(k+1.0))*Ave+S[k]/(k+1.0);
    }
    if (Ave<K) return 0.0;
    return Ave-K;
}

double EurCall::Payoff(SamplePath& S) {
    if(S[0] < K) {return 0.0;}
    return S[0] - K;
}

double EurPut::Payoff(SamplePath& S) {
    if(K < S[0]) {return 0.0;}
    return K - S[0];
}
