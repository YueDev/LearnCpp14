//
// Created by Yue on 2022/5/18.
//
#include "test.h"
#include <iostream>


//实现h文件的定义，需要写namespace
//如果不用namespace的话 可以SALE::setScale这样，下边showSales方法演示了这种情况
namespace SALES {

    void setSales(SALES::Sales &s, const double *ar, int n) {
        double max = 0.0;
        double min = 0.0;
        double sum = 0.0;
        for (int i = 0; i < QUARTERS; ++i) {
            double d = i < n ? *(ar + i) : 0.0;
            s.sales[i] = d;
            sum += d;
            if (d > max) max = d;
            if (d < min) min = d;
        }

        s.max = max;
        s.min = min;
        s.avarage = sum / QUARTERS;
    }

    void setSales(Sales &s) {
        double max = 0.0;
        double min = 0.0;
        double sum = 0.0;
        for (const auto &sale: s.sales) {
            sum += sale;
            if (sale > max) max = sale;
            if (sale < min) min = sale;
        }

        s.max = max;
        s.min = min;
        s.avarage = sum / QUARTERS;

    }

}

void SALES::showSales(const Sales &s) {
    using std::cout;
    using std::endl;

    cout << "sales: ";

    for (const auto &sale: s.sales) {
        cout << sale << ", ";
    }

    cout << endl;

    cout << "min: " << s.min << ", max: " << s.max << ", avarage: " << s.avarage << endl;

}