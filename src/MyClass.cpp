//
// Created by Yue on 2022/5/23.
//

#include <iostream>
#include "MyClass.h"


//destructor
MyClass::~MyClass() {

    std::cout << "class end" << std::endl;
}

MyClass::MyClass() {
    std::cout << "class start" << std::endl;
}

void MyClass::operator+(int i) const {
    std::cout << "operator + int" << std::endl;
}

void MyClass::operator+(double d) const {
    std::cout << "operator + double" << std::endl;
}

void MyClass::operator+(const MyClass &myClass) const {
    std::cout << "operator + myClass" << std::endl;
}


