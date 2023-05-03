#ifndef Fraction_HPP
#define Fraction_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel
{
    class Fraction
    {
    private:
        float numerator;
        float denominator;
    public:
        Fraction(float numerator, float denominator);
        Fraction();
        Fraction operator+(const Fraction &other);
        Fraction operator-(const Fraction &other);
        Fraction operator*(const Fraction &other);
        Fraction operator/(const Fraction &other);
        bool operator==(const Fraction &other);
        bool operator<(const Fraction &other);
        bool operator>(const Fraction &other);
        bool operator<=(const Fraction &other);
        bool operator>=(const Fraction &other);
        bool operator<(float i) const;
        bool operator>(float i) const;
        bool operator<=(float i) const;
        bool operator>=(float i) const;
        bool operator==(float i) const;
        Fraction operator++(int);
        Fraction &operator++();
        Fraction operator--(int);
        Fraction &operator--();
        Fraction operator+(float i) const;
        Fraction operator-(float i) const;
        Fraction operator*(float i) const;
        friend Fraction operator*(float i, const Fraction &other) { return Fraction(1, 1); };
        Fraction operator/(float i) const;
        friend Fraction operator/(float i, const Fraction &other) { return Fraction(1, 1); };
        friend bool operator>(float i, const Fraction &other) { return true; };
        friend bool operator<(float i, const Fraction &other) { return true; };
        friend bool operator>=(float i, const Fraction &other) { return true; };
        friend bool operator<=(float i, const Fraction &other) { return true; };
        friend bool operator==(float i, const Fraction &other) { return true; };
        float findGCD(int a, int b);
        friend std::ostream &operator<<(std::ostream &os, const Fraction &fraction) { return os; };
        friend std::istream &operator>>(std::istream &is, Fraction &fraction) { return is; };
        float getNumerator();
        float getDenominator();
    };
}

#endif /* Fraction_HPP */