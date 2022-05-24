#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <array>
#include <iomanip>
#include <algorithm>

#include <fstream>

#include "test.h"

#include <new>

#include "MyClass1.h"

using namespace std;


struct People {
    string name;
    int age;
};


int main() {


    return 0;
}



//函数地址作为参数
//可以把4则运算放到一个数组里，然后遍历
//    float (*cal_p[4])(float , float) {
//        add, minu, multiply, div
//    };

//    for (const auto &p: cal_p) {
//        cout << calculate(10.0f, 10.0f, p) << endl;
//    }


float calculate(float a, float b, float (*cal)(float, float)) {
    return (*cal)(a, b);
}


float add(float a, float b) {
    return a + b;
}

float minu(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

//简单的file io
void simpleFileIO() {


    string filePath = "../test.txt";
    People people{
            "asdsad", 123,
    };

    ofstream outFile;
    outFile.open(filePath);

    outFile << "This is test1." << endl;
    outFile << "This is test2." << endl;
    outFile << "This is test3." << endl;
    outFile << "This is test4." << endl;

    outFile.close();

    ifstream inFile;
    inFile.open(filePath);
    if (!inFile.is_open()) {
        cout << "Error! Input file is not open!" << endl;
        exit(EXIT_FAILURE);
    }

    cout << inFile.rdbuf();

    inFile.close();
}


// 乘阶，用数组比较占用空间
void factorials(int num) {

    cout << setprecision(100);

    long double temp = 1.0;

    for (int i = 0; i <= num; ++i) {
        temp = i * temp;
        if (i == 0) temp = 1.0;

        cout << i << "! = " << temp << endl;
    }

    cout << setprecision(6);
}


//c-string 的一个问题，尽量用c++ string类
void cStringProblem() {
    char p1[] = "abcde";
    char *p2 = new char[6]{'a', 'b', 'c', 'd', 'e'};
    char *p3 = "abcde";  //IDE会提示用const char*

    p1[0] = '1';  //正确  数组p1的地址在栈上
    *p2 = '1';    //正确  p2指向堆上
    *p3 = '1';    //ERROR!运行时错误p3指向常量区，不能修改

    //c++要求p3类型为const char*, 在编译期就避免这种情况
    //微软的c++指南要求用string代替char*处理字符串，会避免char*的很多问题
    delete[] p2;

}