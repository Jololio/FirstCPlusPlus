//
//  FirstController.cpp
//  FirstCProject
//
//  Created by Alabudi, Joseph on 1/25/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "words here please :D" << endl;
    specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "Hi how old are you?" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout <<"Type in your name :D" << endl;
    string name;
    cin >> name;
    cout << "your name is " << name << " sick dude." << endl;
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
    
    
}
