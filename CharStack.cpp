// Filename: CharStack.cpp
// Author: Mario Ezekiel Hernandez
// Date: 4/27/2016
// Assignment no. 7
// CS 2308.252 SPRING 2016
// Instructor: Jill Seaman
//
// Member functions of the CharStack class.


#include<iostream>
#include<cstring>
#include<cassert>
#include "CharStack.h"

using namespace std;

// *************************************************
// Constructor
// Initializes character stack to the empty string.
// *************************************************
CharStack::CharStack () {
    stackString = "";
}

// ************************************
// Function: push()
// Pushes the argument onto the stack.
// ************************************
void CharStack::push (char ch) {
    stackString += ch;
}


// **************************************************
// Function: pop()
// Removes and returns the top value from the stack.
// **************************************************
char CharStack::pop () {
    char ch;
    int num;
    num = stackString.size() - 1;
    ch = stackString[num];

    stackString.erase(stackString.size() - 1, stackString.size());

    return ch;
}



// *****************************************************
// Function: isFull()
// Check to see if stack is full, return true or false.
// *****************************************************
bool CharStack::isFull () const {
	return (!(stackString.size() > 0) );
}


// ******************************************************
// Function: isEmpty()
// Check to see if stack is empty, return true or false.
// ******************************************************
bool CharStack::isEmpty () const {
	return (stackString.size() == 0);
}

