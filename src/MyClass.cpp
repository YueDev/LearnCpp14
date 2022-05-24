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
};


