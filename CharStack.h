// Filename: CharStack.h
// Author: Jill Seaman (file provided)
// CS 2308.252 SPRING 2016
// Instructor: Jill Seaman

#include <string>
using namespace std;

class CharStack
{
private:
    string stackString;  //contains the stack of characters
    
public:
    // Constructor
    CharStack();
    
    // Stack operations
    void push(char);
    char pop();
    bool isFull() const;
    bool isEmpty() const;
}; 

