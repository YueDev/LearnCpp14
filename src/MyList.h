//
// Created by Yue on 2022/5/24.
//

#ifndef LEARNCPP14_MYLIST_H
#define LEARNCPP14_MYLIST_H

typedef long long  Item;

//先进先出
class MyList {


private:
    static const int MAX = 10;
    Item _items[MAX] {};
    int _size;
public:
    MyList();

    bool isEmpty() const {
        return _size == MAX;
    };
    bool isFull() const {
        return _size == 0;
    };
    int size() const {
        return _size;
    };

    void print() const;
    bool add(const Item &item);
    bool remove(Item &item);
};


#endif //LEARNCPP14_MYLIST_H
