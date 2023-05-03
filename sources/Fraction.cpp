#include <iostream>
#include <stdexcept>
#include "Fraction.hpp"
using namespace std;
using namespace ariel;

Fraction ::Fraction(int numerator, int denominator){};

Fraction ::Fraction() {}

ostream &operator<<(ostream &os, const Fraction &fraction)
{
    return os;
};

istream &operator>>(istream &is, Fraction &fraction)
{
    return is;
};

int Fraction ::findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

Fraction Fraction ::operator+(const Fraction &other)
{
    return Fraction(1, 1);
};

bool Fraction ::operator==(const Fraction &other)
{
    return true;
};

Fraction Fraction ::operator-(const Fraction &other)
{
    return Fraction(1, 1);
};

Fraction Fraction ::operator*(const Fraction &other)
{
    return Fraction(1, 1);
};

Fraction Fraction ::operator/(const Fraction &other)
{
    return Fraction(1, 1);
};

bool Fraction :: operator<(const Fraction& other){
    return true;
};

bool Fraction :: operator>(const Fraction& other){
    return true;
};

bool Fraction :: operator<=(const Fraction& other){
    return true;
};

bool Fraction :: operator>=(const Fraction& other){
    return true;
};

Fraction Fraction :: operator++(int){
    return *this;
};

Fraction Fraction :: operator--(int){
    return *this;
};

Fraction Fraction ::operator+(const Fraction &other)
{
    return Fraction(1, 1);
};


// Fraction Fraction :: operator-(const int& other){
//     return other-this;
// };

// Fraction Fraction :: operator*(const int& other){
//     return other*this;
// };

// Fraction Fraction :: operator/(const int& other){
//     return other/this;
// };