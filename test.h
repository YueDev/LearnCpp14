//
// Created by Yue on 2022/5/18.
//

#ifndef LEARNCPP14_TEST_H
#define LEARNCPP14_TEST_H

namespace SALES {

    const int QUARTERS = 4;

    struct Sales {
        double sales[QUARTERS];
        double avarage;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);

    void setSales(Sales &s);

    void showSales(const Sales &s);
}

#endif //LEARNCPP14_TEST_H
