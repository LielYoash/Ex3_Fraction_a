#ifndef Fraction_HPP
#define Fraction_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{
    class Fraction{
        public:
            int numerator;
            int denominator;
            Fraction(int numerator, int denominator);
            Fraction();
            friend ostream& operator << (ostream& os, const Fraction& fraction);
            Fraction operator +(const Fraction& other);
            bool operator ==(const Fraction& other);
            Fraction operator -(const Fraction& other);
            Fraction operator *(const Fraction& other);
            Fraction operator /(const Fraction& other);
            int findGCD(int a, int b);
            bool operator <(const Fraction& other);
            bool operator >(const Fraction& other);
            friend istream& operator >> (istream& is, Fraction& fraction);
            bool operator <=(const Fraction& other);
            bool operator >=(const Fraction& other);
            Fraction operator++(int);
            Fraction operator--(int);
    };
}

#endif /* Fraction_HPP */