//
// Created by Yue on 2022/5/25.
//

#ifndef LEARNCPP14_COMPLEX_H
#define LEARNCPP14_COMPLEX_H


//表示复数的类  C++ PRIME PLUS 11.9.7
class Complex {
private:
    double real;
    double imaginary;
public:

    explicit Complex(double r = 0.0, double i = 0.0);

    Complex operator+(const Complex &complex) const;

    Complex operator-(const Complex &complex) const;

    Complex operator*(const Complex &complex) const;

    Complex operator-() const;

    Complex operator*(double d) const;

    friend Complex operator*(double d, const Complex& complex);

    friend std::ostream &operator<<(std::ostream &os, const Complex &complex);
};


#endif //LEARNCPP14_COMPLEX_H
