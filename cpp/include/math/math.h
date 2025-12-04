#include <iostream>

// Utilizing facade pattern
class Math {
    public:
        Math() {};
        static double mathSqrt(double num) {};
        static double mathExp(double num, double exponent) {};
        static double mathIntegral(double boudL, double boudH, double (*callbackF)(double x)) {};
};