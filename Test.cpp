#include "doctest.h"
#include <stdexcept>
using namespace std;
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Checking exceptions"){
    Fraction d(1,4);
    CHECK_NOTHROW(Fraction c(2,5));     
    CHECK_NOTHROW(Fraction a(5,2));
    CHECK_NOTHROW(Fraction b(3,4));
    CHECK_THROWS(Fraction (2,0));       //check throws by trying to create invalid fraction
    CHECK_THROWS(Fraction (0,0));       //same as the above even by creating zero 
    CHECK_NOTHROW(cout<<d);  
    CHECK_NOTHROW(d++);
    CHECK_NOTHROW(++d);
    CHECK_NOTHROW(--d);           
}

TEST_CASE("Arithmetic actions"){
    Fraction c(2,5);     
    Fraction a(5,2);
    Fraction b(3,4);
    CHECK_EQ((a+b),Fraction(13,4));
    CHECK_EQ((c+b),Fraction(23,20));
    CHECK_EQ((b+c),Fraction(23,20));       //order of insertion for function should not matter
    CHECK_EQ(c-a,Fraction(-21,10));
    CHECK_EQ((a*Fraction(1,1)),a);          //check multiplying by 1
    CHECK_EQ((Fraction(4,4)*b),b);          //also mult by 1
    CHECK_EQ(c/Fraction(1,1),c);            //division by 1 should not change the fraction
    CHECK_EQ(2.4*b,Fraction(9,5));          //check that it works by multyplying a double  
}

TEST_CASE("Boolean Algebra"){
    Fraction c(2,5);     
    Fraction a(5,2);
    Fraction b(3,4);
    Fraction d(3,4);
    CHECK_FALSE(c>a);
    CHECK_FALSE(a<b);
    CHECK(a>=c);
    CHECK(b<=d);
    CHECK(c==Fraction(2,5));
    CHECK(d==b);
    CHECK(a==Fraction(10,4));              //Fractions are equal if you can reduce it and get the same result
}