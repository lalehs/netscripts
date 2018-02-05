//
//  BMI.hpp
//  Assignment20
//
//  Created by macuser on 2017-01-22.
//  Copyright © 2017 macuser. All rights reserved.
//
// Header ==> Function Declarations

#include <iostream>
#include <string>

using namespace std;


// ifndef mean if not defined <headerFilename> + Underscore + hpp (ex: BMI_hpp)
// define BMI_hpp
// inside create a class + className. After class curly braces you DO put semicolon
// define member variables which are the information that we are going to be computing inside this class
// in terms of OOP we only will cover encapsulation that would privatize certain information inside your class so that they could not be accessed from any other files that you might have, so not to be
// So, member varialbes are private
// function declaration go into public. Sometimes there are exceptions
// Accessor functions


#ifndef BMI_hpp
#define BMI_hpp

class BMI {
public:
    // Default constructor - set member variable to Null
    BMI();
    
    // Overload constructor - Another way of calling the function
    BMI(string, int, double);
    
    // Destructor - After the object is done should be removed from memory
    ~BMI();
    
    // Accessor Functions - Return member variables values.
        // So, in this example we make 3 accessor functions
    string getName() const;  // Best Practice: to put const if not modifying member function value
        // getName - returns name of patient
    int getHeight() const;
        // getHeight - returns height of patient
    double getWeight() const;
        //getWeight - returns weight of patient
    
    // Mutator Functions - Allows edit member variable one at a time
    void setName(string);
        //setName - sets name of patient
        //@param string - name of patient
    void setHeight(int);
        //setHeight - sets height of patient
        //@param int - height of patient
    void setWeight(double);
        //setWeight - sets weight of patient
        //@param double - weight of patient
    double calculateBMI();
        //calculateBMI - calcuates BMI of patient
        //@return double - BMI of patient
    
private:
    // member variables
    string newName;
    int newHeight;
    double newWeight;
    
};

#endif /* BMI_hpp */
