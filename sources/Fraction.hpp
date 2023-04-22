#include <iostream>
using namespace std;

namespace ariel {
    class Fraction{
        int numerator_;
        int denominator_;

    public:
        Fraction(int nume, int denom);
        Fraction operator+(const Fraction& fr1);
        Fraction operator+(const float& fr1);
        Fraction operator++();
        Fraction operator-(const Fraction& f1r);
        Fraction operator-(const float& fr1);
        Fraction operator/(const Fraction& fr1);
        Fraction operator*(const Fraction& fr1);
        
        Fraction operator++(int dummy_flag);
        Fraction operator--();
        bool operator>(const Fraction& fr1);
        bool operator>(const float& fr1);
        bool operator<(const Fraction& fr1);
        bool operator>=(const Fraction& fr1);
        bool operator<=(const Fraction& fr1);
        bool operator==(const Fraction& fr1);
        friend bool operator==(Fraction const& fr1, Fraction const& fr2);
        friend ostream& operator<< (ostream& os1, Fraction const& fr1);
        friend istream& operator>> (Fraction& fr1,istream& in1);
        friend istream& operator>> (istream& in1, Fraction& fr1);
        friend Fraction operator+(Fraction const& fr1, Fraction const& fr2);
        friend Fraction operator*(const float& fr1,const Fraction& fr2);
};

}