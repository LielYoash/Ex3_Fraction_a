#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace std;
using namespace ariel;
using namespace doctest;
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <fstream>

TEST_CASE("operator <<"){
    Fraction a(1,2);
    Fraction b;
    CHECK(a.getNumerator() == 1);
    CHECK(a.getDenominator() == 2);
    CHECK(b.getNumerator() == 0);
    CHECK(b.getDenominator() == 1);
}

TEST_CASE("operator =="){
    Fraction a(5,3), b(5,3);
        CHECK(a == b);
        CHECK(Fraction(5, 3) == 5 / 3);
        CHECK(Fraction(1, 2) == 1 / 2);
        CHECK(Fraction(1, 3) == 1 / 3);
        CHECK(Fraction(1, 4) == 1 / 4);
        CHECK(Fraction(3, 4) == 3 / 4);
        CHECK(Fraction(10, 20) == 1 / 2);
}

TEST_CASE("operator +"){
    Fraction a(5,3), b(14,21);
    CHECK(a+b == Fraction(105,63));
    Fraction c(1,-2), d(1,3);
    CHECK(c+d == Fraction(-1,6));
    Fraction e(1,2), f(1,3);
    CHECK(e+f == Fraction(5,6));
    Fraction g(1,2), h(1,2);
    CHECK(g+h == Fraction(1,1));
}

TEST_CASE("operator -"){
    Fraction a(5,3), b(14,21);
    CHECK(a-b == Fraction(21,21));
    Fraction c(1,-2), d(1,3);
    CHECK(c-d == Fraction(-5,6));
    Fraction e(1,2), f(1,3);
    CHECK(e-f == Fraction(1,6));
    Fraction g(1,2), h(1,2);
    CHECK(g-h == Fraction(0,1));
}

TEST_CASE("operator *"){
    Fraction a(5,3), b(14,21);
    CHECK(a*b == Fraction(70,63));
    Fraction c(1,-2), d(1,3);
    CHECK(c*d == Fraction(-1,6));
    Fraction e(1,2), f(1,3);
    CHECK(e*f == Fraction(1,6));
    Fraction g(1,2), h(1,2);
    CHECK(g*h == Fraction(1,4));
    Fraction i(1,-2), j(-2,1);
    CHECK(i*j == Fraction(1,1));

}

TEST_CASE("operator /"){
    Fraction a(5,3), b(14,21);
    CHECK(a/b == Fraction(5,3)/Fraction(105,42));
}

TEST_CASE("operator ++"){
    Fraction a(5,3);
    CHECK(a++ == Fraction(8,3));
    CHECK(++a == Fraction(8,3));
}

TEST_CASE("operator --"){
    Fraction a(5,3);
    CHECK(--a == Fraction(2,3));
    CHECK(a-- == Fraction(2,3));
}



