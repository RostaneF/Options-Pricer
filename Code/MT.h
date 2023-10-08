#pragma once
#include <random>
class mt {
public:
    mt(const mt&) = delete;

    //Attributs : 

    static mt& getinstance() {
        static mt instance;
        return instance;
    }

    static std::mt19937* geninstance() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::mt19937* generator = &gen;
        return generator;
    }

    static double rand_unif() {
        std::uniform_real_distribution<> dis(0, 1);
        double val;
        val = dis(*geninstance());
        return val;
    }

    static double rand_norm() {
        std::normal_distribution<> dis(0, 1);
        double val = dis(*geninstance());
        return val;
    }

    static double r_gen() { return getinstance().rand_unif(); }
    static double norm_gen() { return getinstance().rand_norm(); }

private:
    mt() {}

};
