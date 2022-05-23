//
// Created by XaveF on 5/23/2022.
//

#include "PracticeClass.h"
#include <iostream>
using std::cout;
using std::endl;

PracticeClass::PracticeClass()
{
    cout << "[Default constructor called]" << endl;
    _value = new int;           // create a block of memory before assign a value
    *_value  = 0;
}

PracticeClass::PracticeClass(const PracticeClass &origObj)
{
    cout << "[Copy constructor called]" << endl;
    _value = new int;
    *_value = *(origObj._value);
}

PracticeClass::~PracticeClass()
{
    cout << "[Destructor called]" << endl;
    delete _value;                // clear/delete block memory that's been allocated
}

void PracticeClass::SetVal(const int &val)
{
    cout << "[Set a value]" << endl;
    *_value = val;
}

int PracticeClass::GetVal() const
{
    return *_value;
}
