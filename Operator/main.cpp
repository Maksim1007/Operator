//Перегрузка операторов.
//Задание 1.
#include <iostream>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    bool operator==(const Fraction& other) const {
        return numerator_ * other.denominator_ == denominator_ * other.numerator_;
    }
    bool operator!=(const Fraction& other) const {
        return !(*this == other);
    }
    bool operator<(const Fraction& other) const {
        return (numerator_ * other.denominator_ < denominator_ * other.numerator_);
    }
    bool operator>(const Fraction& other) const {
        return (numerator_ * other.denominator_ > denominator_ * other.numerator_);
    }
    bool operator<=(const Fraction& other) const {
        return (numerator_ * other.denominator_ <= denominator_ * other.numerator_);
    }
    bool operator>=(const Fraction& other) const {
        return (numerator_ * other.denominator_ >= denominator_ * other.numerator_);
    }
};

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

}