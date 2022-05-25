//
// Created by Yue on 2022/5/23.
//

#include <iostream>
#include "MyClass.h"


//destructor
MyClass::~MyClass() = default;

MyClass::MyClass() {
    temp = 0;
}

MyClass::MyClass(int i) {
    temp = i;
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

//如果 i + myClass 与 myClass + i 结果一样的话，这里可以不用友元，直接调用myClass + i即可
//如果i + myClass与myClass + i结果不同的话，则可以用友元函数了。
void operator+(int i, const MyClass &myClass) {
    std::cout << i << " + " << myClass.temp << std::endl;
}
//单纯的友元函数，没有重载操作符
void friendFunc(const MyClass &myClass) {
    std::cout << "friend func: " << myClass.temp << std::endl;
}

//重载<< 要返回收入的ostream对象才能继续链式调用
std::ostream &operator<<(std::ostream &os, const MyClass &myClass) {
    os << "MyClass temp: " << myClass.temp;
    return os;
}


MyClass::operator int() const {
    std::cout << "operator int" << std::endl;
    return temp;
}

