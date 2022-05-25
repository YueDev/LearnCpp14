//
// Created by Yue on 2022/5/23.
//

#ifndef LEARNCPP14_MYCLASS_H
#define LEARNCPP14_MYCLASS_H


class MyClass {
private:
    enum {Size = 10};
    static const int num = 10;
public:
    MyClass();
    ~MyClass();
    void operator+(int i) const;
    void operator+(double d) const;
    void operator+(const MyClass &myClass) const;
};


#endif //LEARNCPP14_MYCLASS_H
