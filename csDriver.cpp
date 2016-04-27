// Filename: csDriver.cpp
// Author: Mario Ezekiel Hernandez
// Date: 4/27/2016
// Assignment no. 7
// CS 2308.252 SPRING 2016
// Instructor: Jill Seaman
//
// Description: driver for CharStack.cpp/h

#include <iostream>
#include <fstream>
#include "CharStack.h"

using namespace std;

// Function prototype for matching characters
char matching(char);

int main()
{
	// Variables
    string name;
    char character;
    char top;
    bool errorValue = false;

    // Initialize character stack
    CharStack stack;

    cout << "Enter the name of the file you want to check: ";
    cin >> name;

    // Open file
    ifstream fin;
    fin.open(name.c_str());

    // Error msg
    if (!fin) {
        cout << "Could not open " << name << endl;
        return -1;
    }

    while (!errorValue && fin >> character) 
    {
        switch (character)
        {
        	// Opening brackets/braces/parentheses
            case '{':
            case '(':
            case '[':
                stack.push(character);
            break;

            // Closing brackets/braces/parentheses
            case '}':
            case ')':
            case ']':

                if (!stack.isEmpty()) {
                    top = stack.pop();

                    if (top == matching(character)) {}
                    else {
                        char topCharacter = top;
                        cout << "Expected: " << matching(topCharacter) << endl;
                        cout << "Found: " << character << endl;
                        errorValue = true;
                    }
                }
                else {
                    cout << "No match found: " << character << endl;
                    errorValue = true;
                }
                break;
        }

    }

    if (!errorValue) {
        if (!stack.isEmpty()) {
            top = stack.pop();
            char topCharacter = top;
            cout << "Missing: " << matching(topCharacter) << endl;
        } else {
            cout << "Every bracket matched!" << endl;
        }
    }

    return 0;
}


// **************************
// Function: matching()
// 
// **************************
char matching(char character)
{
    switch(character)
    {
        case '{':
            return '}';
        case '[':
            return ']';
        case '(':
            return ')';
        case '}':
            return '{';
        case ']':
            return '[';
        case ')':
            return '(';
    }

    return character;
}
