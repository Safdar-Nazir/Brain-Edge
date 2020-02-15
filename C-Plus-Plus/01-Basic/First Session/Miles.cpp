//
// Created by safdar on 11/02/2020.
//

#include "Miles.h"
#include <iostream>
using namespace std;

string names[5];
int data[5][7], sum[5], temp = 0;
float average[5];
void Miles::Input() {
    for (int i = 0; i < 5; ++i) {
        cout << "Enter the Name of Runner: ";
        cin >>names[i];
        for (int j = 0; j < 7; ++j) {
            cout<<"Enter the number of miles of "<<names[i]<<" for day "<<j+1<<" :";
            cin>>data[i][j];
        }
        cout<<endl;
    }
}

void Miles::Calculations() {
    for (int i = 0; i < 5; ++i) {
        temp  = 0;
        for (int j = 0; j < 7; ++j) {
            temp = temp + data[i][j];
        }
        sum[i] = temp;
        average[i] = sum[i] / 5;
    }

}

void Miles::Output() {
    for (int i = 0; i < 5; ++i) {
        cout<<"Total distance travelled by "<<names[i]<<" is: "<<sum[i]<<endl;
        cout<<"The Average distance travelled by "<<names[i]<<" is: "<<average[i]<<endl;

    }
}

