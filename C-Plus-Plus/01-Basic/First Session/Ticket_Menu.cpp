//
// Created by Safdar on 02/02/2020.
//

#include "Ticket_Menu.h"
#include <iostream>
using namespace std;
Ticket_Menu::Ticket_Menu() {
    Again:
    char name[15];
    int choice, row, seat_letter;
    cout << "Menu:" << endl;
    cout << "Please select one of these standards:\n1. First Class\n2. Business Class\n3. Economy Class" << endl;
    cout << "Enter Your Choice Here: ";
    cin >> choice;
    switch (choice) {
        case 1: {
            cout << "Available = *\n Occupied = x" << endl;
            char seat;
            string first_class[2][6], f_rows, f_cols;
            for (int i = 0; i < 2; ++i) {
                if (i == 0) {
                    char seats = {'A'};
                    for (int j = 0; j < 6; ++j) {
                        cout << "            " << seats;
                        seats++;
                    }
                    cout << endl;
                } else {
                    for (int j = 0; j < 2; ++j) {
                        cout << "Row " + to_string(j + 1);
                        for (int k = 0; k < 6; ++k) {
                            first_class[j][k] = {'*'};
                            cout << "       " << first_class[j][k] << "     ";
                        }
                        cout << endl;
                    }
                }
            }
            cout << "Please select your Row(1/2): ";
            cin >> row;
            cout << "Please select your Seat(1 to 6): ";
            cin >> seat_letter;
            first_class[row][seat_letter];
            cout << "Available = *\n Occupied = x" << endl;
            for (int i = 0; i < 2; ++i) {
                if (i == 0) {
                    char seats = {'A'};
                    for (int j = 0; j < 6; ++j) {
                        cout << "            " << seats;
                        seats++;
                    }
                    cout << endl;
                } else {
                    for (int j = 0; j < 2; ++j) {
                        cout << "Row " + to_string(j + 1);


                        for (int k = 0; k < 6; ++k) {
                            first_class[j][k] = {'*'};
                            first_class[row - 1][(seat_letter) - 1] = "x";
                            cout << "       " << first_class[j][k] << "     ";
                        }
                        cout << endl;
                    }
                }
            }
            break;
        }
        case 2: {
            cout << "Available = *\n Occupied = x" << endl;
            char seat;
            string first_class[5][6], f_rows, f_cols;
            for (int i = 0; i < 2; ++i) {
                if (i == 0) {
                    char seats = {'A'};
                    for (int j = 0; j < 6; ++j) {
                        cout << "            " << seats;
                        seats++;
                    }
                    cout << endl;
                } else {
                    for (int j = 0; j < 5; ++j) {
                        cout << "Row " + to_string(j + 3);


                        for (int k = 0; k < 6; ++k) {
                            first_class[j][k] = {'*'};
                            cout << "       " << first_class[j][k] << "     ";
                        }
                        cout << endl;
                    }
                }
            }
            cout << "Please select your Row(3 to 7): ";
            cin >> row;
            cout << "Please select your Seat(1 to 6): ";
            cin >> seat_letter;
            first_class[row][seat_letter];
            cout << "Available = *\n Occupied = x" << endl;
            for (int i = 0; i < 2; ++i) {
                if (i == 0) {
                    char seats = {'A'};
                    for (int j = 0; j < 6; ++j) {
                        cout << "            " << seats;
                        seats++;
                    }
                    cout << endl;
                } else {
                    for (int j = 0; j < 5; ++j) {
                        cout << "Row " + to_string(j + 3);
                        for (int k = 0; k < 6; ++k) {
                            first_class[j][k] = {'*'};
                            first_class[row - 3][(seat_letter) - 1] = "x";
                            cout << "       " << first_class[j][k] << "     ";
                        }
                        cout << endl;
                    }
                }
            }
            break;
        }
        case 3:
        {
            cout << "Available = *\n Occupied = x" << endl;
            char seat;
            string first_class[6][6], f_rows, f_cols;
            for (int i = 0; i < 2; ++i) {
                if (i == 0) {
                    char seats = {'A'};
                    for (int j = 0; j < 6; ++j) {
                        cout << "            " << seats;
                        seats++;
                    }
                    cout << endl;
                } else {
                    for (int j = 0; j < 6; ++j) {
                        cout << "Row " + to_string(j + 8);

                        if (j < 2) {
                            for (int k = 0; k < 6; ++k) {
                                first_class[j][k] = {'*'};
                                cout << "       " << first_class[j][k] << "     ";
                            }
                        } else{
                            for (int k = 0; k < 6; ++k) {
                                first_class[j][k] = {'*'};
                                cout << "      " << first_class[j][k] << "      ";
                            }
                        }
                        cout << endl;
                    }
                }
            }
            cout << "Please select your Row(8 to 13): ";
            cin >> row;
            cout << "Please select your Seat(1 to 6): ";
            cin >> seat_letter;
            first_class[row][seat_letter];
            cout << "Available = *\n Occupied = x" << endl;
            for (int i = 0; i < 2; ++i) {
                if (i == 0) {
                    char seats = {'A'};
                    for (int j = 0; j < 6; ++j) {
                        cout << "            " << seats;
                        seats++;
                    }
                    cout << endl;
                } else {
                    for (int j = 0; j < 6; ++j) {
                        cout << "Row " + to_string(j + 8);


                        if (j < 2) {
                            for (int k = 0; k < 6; ++k) {
                                first_class[j][k] = {'*'};
                                first_class[row - 7][(seat_letter) - 1] = "x";
                                cout << "       " << first_class[j][k] << "     ";
                            }
                        } else{
                            for (int k = 0; k < 6; ++k) {
                                first_class[j][k] = {'*'};
                                first_class[row - 8][(seat_letter) - 1] = "x";
                                cout << "      " << first_class[j][k] << "      ";
                            }
                        }
                        cout<<endl;
                    }
                }
            }
            break;
        }
    }
    char ch;
    cout<<"Do you want to book another seat(Y/N):";
    cin>>ch;
    if (ch == 'Y' || ch == 'y')
    {
        goto Again;
    } else{
        return ;
    }
};