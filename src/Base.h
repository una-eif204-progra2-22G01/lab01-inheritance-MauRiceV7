//
// Created by mauri on 3/15/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>

class Base {
public:
    Base();
    ~Base();

    virtual void do_something() = 0;
};


#endif //LAB01_INHERITANCE_BASE_H
