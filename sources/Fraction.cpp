#include "Fraction.hpp"
using namespace ariel;

Fraction::Fraction(int nume, int denom):numerator_(nume),denominator_(denom){}
Fraction Fraction::operator+(const Fraction& fr1){return *this;}
Fraction Fraction::operator+(const float& fr1){return *this;}
Fraction Fraction::operator++(){return *this;}

Fraction operator+(Fraction const& fr1, Fraction const& fr2){return fr1;}
Fraction Fraction::operator-(const Fraction& fr1){return *this;}
Fraction Fraction::operator-(const float& fr1){return *this;}
Fraction Fraction:: operator/(const Fraction& fr1){return *this;}
Fraction Fraction:: operator*(const Fraction& fr1){return *this;}

Fraction Fraction:: operator++(int dummy_flag){return *this;}
Fraction Fraction:: operator--(){return *this;}
bool Fraction:: operator>(const Fraction& fr1){return false;}
bool Fraction:: operator>(const float& fr1){return false;}
bool Fraction:: operator<(const Fraction& fr1){return false;}
bool Fraction:: operator>=(const Fraction& fr1){return false;}
bool Fraction:: operator<=(const Fraction& fr1){return false;}
bool Fraction:: operator==(const Fraction& fr1){return false;}
bool ariel::operator==(Fraction const& fr1, Fraction const& fr2){return false;}
istream& operator>> (Fraction& fr1,istream& in){return in;}
istream& operator>> (istream& in, Fraction& fr1){return in;}
ostream& ariel::operator<< (ostream& os, Fraction const& fr1){return os;}
Fraction ariel::operator*(const float& fr1, const Fraction& fr2){return fr2;}