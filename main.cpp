// Title: Copy constructor
// Purpose:
// Author:
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include "PracticeClass.h"

using std::cout;
using std::endl;

void Test(PracticeClass copyObj)
{
    int test = 0;
    test = copyObj.GetVal() * 2;
    cout << "The sqrt (from copied value) is : " << test << endl;
}

int main()
{
    cout << endl;
    PracticeClass fClass;
    cout << "Default value: " << fClass.GetVal() << endl;

    cout << endl;
    fClass.SetVal(12);
    cout << "Updated value: " << fClass.GetVal() << endl;

    cout << endl;
    Test(fClass);
    cout << endl;

    cout << "Latest value: " << fClass.GetVal() << endl;

  
  return 0;
}
