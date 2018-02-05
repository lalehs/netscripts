//
//  main.cpp
//  Assignment20
//
//  Created by macuser on 2017-01-22.
//  Copyright © 2017 macuser. All rights reserved.
//
// Tutorial 20: This tutorial deals with OOP and Classes in C++
// Create a Class that returns BMI of each Patient
// Each Patient object is defined by Name, Height, and Weight

// Note: Classes are never created in main.cpp. They are created in separate class files.

#include <iostream>
#include <string>

#include "BMI.hpp"

using namespace std;

int main() {
    string name;
    int height;
    double weight;
    
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your height (in inches): " << endl;
    cin >> height;
    cout << "Enter your weight (in pounds): " << endl;
    cin >> weight;
    
    // creating object Student_1 using class BMI and using overload constructor
    
     /*BMI Patient_1(name, height, weight);
   
    cout << endl << "Patient Name: " << Patient_1.getName() << endl <<
        "Height: " << Patient_1.getHeight() << endl <<
        "Weight: " << Patient_1.getWeight() << endl;
     */
    
    BMI Patient_2;
    Patient_2.setName(name);
    Patient_2.setHeight(height);
    Patient_2.setWeight(weight);
    
    cout << endl << "Patient Name: " << Patient_2.getName() << endl <<
    "Height: " << Patient_2.getHeight() << endl <<
    "Weight: " << Patient_2.getWeight() << endl <<
    "BMI: " << Patient_2.calculateBMI() << endl;

    return 0;
}
