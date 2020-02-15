//
// Created by safdar on 11/02/2020.
//

#include "Temperature.h"
#include <iostream>
using namespace std;

int temperature[12][2], lowSum=0, highSum=0, minValue, maxValue, minIndex, maxIndex;
float lowAverage=0, highAverage=0;

void Temperature::Input() {
    cout<<"Temperature of last 12 Months: "<<endl;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (j == 0) {
                cout << "Enter the Highest Temperature for Month: " << i+1 << " : ";
                cin >> temperature[i][j];
                highSum = highSum + temperature[i][j];
            } else {
                cout << "Enter the Lowest Temperature for Month: " << i+1 << " : ";
                cin >> temperature[i][j];
                lowSum = lowSum + temperature[i][j];
            }
        }
    }
}
void Temperature::averageLow() {
    lowAverage = lowSum / 12.0;
    cout<<"Average of Lowest Temperature for the last 12 Months: "<<lowAverage<<endl;
}
void Temperature::averageHigh() {
    highAverage = highSum / 12.0;
    cout<<"Average of the Highest Temperature for the last 12 Months: "<<highAverage<<endl;
}
void Temperature::indexHigh() {
    maxValue = temperature[0][0];
    for (int i = 0; i < 12; ++i) {
        if (temperature[i][0]>maxValue)
        {
            maxValue = temperature[i][0];
            maxIndex = i+1;
        }
    }
    cout<<"The Highest Temperature in the last 12 Month was "<<maxValue<<" and it was in Month "<<maxIndex<<"."<<endl;
}
void Temperature::indexLow() {
    minValue = temperature[0][1];
    minIndex = 1;
    for (int i = 0; i < 12; ++i) {
        if (temperature[i][1]<minValue)
        {
            maxValue = temperature[i][1];
            minIndex = i+1;
        }
    }
    cout<<"The Lowest Temperature in the last 12 Month was "<<minValue<<" and it was in Month "<<minIndex<<"."<<endl;
}