#pragma once
#include <iostream>

class baseVector {
public:
    baseVector() {};
    virtual ~baseVector() {};
    virtual double length() { return 0; };
};

class twoDimensionalVector : public baseVector {
private:
    double x1;
    double x2;
public:
    twoDimensionalVector(double value1, double value2)
    {
        x1 = value1;
        x2 = value2;
    };
    virtual ~twoDimensionalVector() override {};
    virtual double length() override
    {
        return sqrt((pow(x1, 2) + pow(x2, 2)));
    };
};

class threeDimensionalVector : public baseVector {
private:
    double x1;
    double x2;
    double x3;
public:
    threeDimensionalVector(double value1, double value2, double value3)
    {
        x1 = value1;
        x2 = value2;
        x3 = value3;
    }

    virtual ~threeDimensionalVector() override {};

    virtual double length() override
    {
        return sqrt((pow(x1, 2) + pow(x2, 2) + pow(x3, 2)));
    };
};
