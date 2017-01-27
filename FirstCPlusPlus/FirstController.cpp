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
    
    int myNumber = 9;
    int * numberPointer = &myNumber;
    cout << "Starting with" << myNumber << endl;
    useNumbers(myNumber);
    cout << "Look no change XD: " << myNumber << endl;
    cout << "Changing a value" << endl;
    myNumber = impactNumber();
    cout << "See - impacted " << myNumber << endl;
    cout << "Changing with a pointer: " << endl;
    usePointerToChange(numberPointer);
    cout << "See how the number has been changed: " << myNumber << endl;
    
}

void FirstController :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (1230985);
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

void FirstController :: secondaryOutput()
{
    cout << "Good strings my dude" << endl;
    cout << "Yo is this string good???" << endl;
    string userResponse1;
    cin >> userResponse1;
    cout << "Well that's sick dude" << endl;
    
}

void FirstController :: useNumbers(int suppliedNumber)
{
    cout << "I was fiven: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 3242) / 42;
    cout << "It is now: " << suppliedNumber << endl;
}

int FirstController :: impactNumber()
{
    return 8765432;
}
