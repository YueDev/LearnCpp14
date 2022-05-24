//
// Created by Yue on 2022/5/23.
//

#include <iostream>
#include "MyClass1.h"


//destructor
MyClass1::~MyClass1() {

    std::cout << "class end" << std::endl;
}

MyClass1::MyClass1() {
    std::cout << "class start" << std::endl;
};


