//
// Created by XaveF on 5/23/2022.
//

#ifndef C_COPYCONSTRUCTOR2_PRACTICECLASS_H
#define C_COPYCONSTRUCTOR2_PRACTICECLASS_H


class PracticeClass
{
private:
    int* _value;
public:
    PracticeClass();                                        // default constructor
    PracticeClass(const PracticeClass& origObj);           // copy constructor
    ~PracticeClass();                                        // destructor
    void SetVal(const int& val);
    int GetVal() const;
};

#endif //C_COPYCONSTRUCTOR2_PRACTICECLASS_H
