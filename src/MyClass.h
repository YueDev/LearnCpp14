//
// Created by Yue on 2022/5/23.
//

#ifndef LEARNCPP14_MYCLASS_H
#define LEARNCPP14_MYCLASS_H


class MyClass {
private:
    enum {Size = 10};
    static const int num = 10;
    int temp;
public:
    MyClass();
    ~MyClass();
    void operator+(int i) const;
    void operator+(double d) const;
    void operator+(const MyClass &myClass) const;
    //友元函数必须声明在类中,一般用于重写操作符
    friend void operator+(int i, const MyClass &myClass);
    //也可以直接使用
    friend void friendFunc(const MyClass &myClass);

    //重载<<
    friend std::ostream &operator<<(std::ostream &os, const MyClass &myClass);
};


#endif //LEARNCPP14_MYCLASS_H
