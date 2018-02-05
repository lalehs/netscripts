//
//  BMI.cpp
//  Assignment20
//
//  Created by macuser on 2017-01-22.
//  Copyright © 2017 macuser. All rights reserved.
//
// Header ==> Function definition
// Since we have created class BMI in header file and created Constructor and Destructor functions

#include "BMI.hpp"

// How to access the functions inside that class - class::function
// :: = scope resolution
// With C++: Do not need to set string to Null state. String class takes care of it.
// Only have to worry about numbers

BMI::BMI() {
    newHeight = 0;
    newWeight = 0.0;
    
}

BMI::BMI(string name, int height, double weight) {
    newName = name;
    newHeight = height;
    newWeight = weight;
    
}

BMI::~BMI(){};


// Created 3 Accessor functions
string BMI::getName() const {
    return newName;
}

int BMI::getHeight() const {
    return newHeight;
}

double BMI::getWeight() const {
    return newWeight;
}

// Created Mutator functions
void BMI::setName(string name) {
    newName = name;
}

void BMI::setHeight(int height) {
    newHeight = height;
}

void BMI::setWeight(double weight) {
    newWeight = weight;
}

double BMI::calculateBMI() {
    return ((newWeight * 703)/ (newHeight * newHeight));
}
