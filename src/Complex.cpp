//
// Created by Yue on 2022/5/25.
//

#include <iostream>
#include "Complex.h"

Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
}

Complex Complex::operator+(const Complex &complex) const {
    return Complex{real + complex.real, imaginary + complex.imaginary};
}

Complex Complex::operator-(const Complex &complex) const {
    return Complex{real - complex.real, imaginary - complex.imaginary};
}

Complex Complex::operator*(const Complex &complex) const {
    double r = real * complex.real - imaginary * complex.imaginary;
    double i = real * complex.imaginary + imaginary * complex.real;
    return Complex{r, i};
}

Complex Complex::operator*(double d) const {
    return Complex{real * d, imaginary * d};
}

Complex Complex::operator-() const {
    return this->operator*(-1);
}

Complex operator*(double d, const Complex &complex) {
    return complex * d;
}

std::ostream &operator<<(std::ostream &os, const Complex &complex) {
    if (complex.imaginary == 0.0) {
        os << complex.real;
    } else if (complex.imaginary < 0.0) {
        os << complex.real << complex.imaginary << "i";
    } else {
        os << complex.real << "+" << complex.imaginary << "i";
    }
    return os;
}







