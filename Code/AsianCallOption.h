#pragma once
using namespace std;
#include "AsianOption.h"
#include <vector>

class AsianCallOption : public AsianOption
{
protected:
    double _strike;

public:
    AsianCallOption(vector<double> vec, double strike) : AsianOption(vec.back(), vec)
    {
        _expiry = vec.back();
        _strike = strike;
    };

    double payoff(double z) override
    {
        double res = 0;
        if (z >= _strike)
        {
            res = z - _strike;
        }

        return res;
    }

    double payoffPath(vector<double> vec) 
    {
        double z = 0;
        double m = vec.size();
        double res = 0;

        for (int i = 0; i < m; i++)
        {
            z += vec[i];
        }
        z = z / m;

        //arbitrage
        res = payoff(z);
        return res;
    }

};