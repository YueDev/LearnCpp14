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
    //禁止隐式转换,MyClass m = i不行;
    explicit MyClass(int i);
    ~MyClass();

    //重载操作符
    void operator+(int i) const;
    void operator+(double d) const;
    void operator+(const MyClass &myClass) const;

    //友元函数必须声明在类中,一般用于重写操作符
    friend void operator+(int i, const MyClass &myClass);
    //友元函数直接使用
    friend void friendFunc(const MyClass &myClass);
    //重载<<
    friend std::ostream &operator<<(std::ostream &os, const MyClass &myClass);

    //转换函数， 可以实现 int i = MyClass(); 和构造器一样，如果加上explicit就会禁止隐式转换
    //IDE也会建议加上explicit避免隐式转换，这里为了演示不加explicit
    operator int() const;

};


#endif //LEARNCPP14_MYCLASS_H
