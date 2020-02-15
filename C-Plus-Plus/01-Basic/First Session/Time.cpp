//
// Created by safdar on 12/02/2020.
//

#include "Time.h"
#include <iostream>
#include <cstring>

using namespace std;
int hours, minutes, seconds;

int Time::Menu() {
    int choice;
    cout<<"Menu"<<endl;
    cout<<"1.Conversion from 12 Hours to 24 Hours\n2.Conversion from 24 Hours to 12 Hours"<<endl;
    cout<<"Please Select your choice(1/2): ";
    cin>>choice;
    return choice;
}

void Time::internationalConversion() {

    string period;
    cout<<"Please Enter Hours(Hours : : ): ";
    cin>>hours;
    cout<<"Please Enter Minutes( : Minutes: ): ";
    cin>>minutes;
    cout<<"Please Enter Seconds( : : Seconds): ";
    cin>>seconds;
    cout<<"Please Enter Period(AM/PM): ";
    cin>>period;
    if (hours > 12 || hours < 0 || minutes > 60 || minutes < 0 || seconds < 0 || seconds > 60 ){
        cout << "The Time Format you have entered is Invalid.";
        exit(1);
    } else {
        if (period == "pm" || period == "PM") {
            {
                hours = hours + 12;
            }
            cout << "The time in 24 Hours Format is " << hours << ":" << minutes << ":" << seconds << endl;
        } else if (period == "am" || period == "AM"){
            cout << "The time in 24 Hours Format is " << hours << ":" << minutes << ":" << seconds << endl;
        }
    }
}
void Time::localConversion() {
    cout<<"Please Enter Hours(Hours : : ): ";
    cin>>hours;
    cout<<"Please Enter Minutes( : Minutes: ): ";
    cin>>minutes;
    cout<<"Please Enter Seconds( : : Seconds): ";
    cin>>seconds;
    if (hours > 24 || hours < 0 || minutes > 60 || minutes < 0 || seconds < 0 || seconds > 60 ){
        cout << "The Time Format you have entered is Invalid.";
        exit(1);
    } else {
        if (hours > 12) {
            {
                hours = hours - 12;
            }
            cout << "The time in 24 Hours Format is " << hours << ":" << minutes << ":" << seconds << " PM"<<endl;
        } else {
            cout << "The time in 24 Hours Format is " << hours << ":" << minutes << ":" << seconds <<" AM"<< endl;
        }
    }
}
