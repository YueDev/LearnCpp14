//
// Created by Yue on 2022/5/24.
//

#include "MyList.h"
#include <iostream>

MyList::MyList() {
    _size = 0;
}

void MyList::print() const {
    if (_size == 0) {
        std::cout << "Empty!" << std::endl;
        return;
    }

    std::cout << "[";
    for (int i = 0; i < _size; ++i) {
        std::cout << _items[i] << ", ";
    }
    std::cout << "]" << std::endl;

}

bool MyList::add(const Item &item) {

    if (_size == MAX) return false;
    _items[_size] = item;
    _size++;
    return true;
}

bool MyList::remove(Item &item) {
    if (_size == 0) return false;
    item = _items[0];
    for (int i = 0; i < _size - 1; ++i) {
        _items[i] = _items[i + 1];
    }
    _size--;
}
