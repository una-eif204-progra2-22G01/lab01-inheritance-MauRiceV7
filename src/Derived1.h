//
// Created by mauri on 3/15/2022.
//

#ifndef LAB01_INHERITANCE_MAURICEV7_DERIVED1_H
#define LAB01_INHERITANCE_MAURICEV7_DERIVED1_H
#include "Base.h"

class Derived1 : Base{
public:
    Derived1();
    ~Derived1();

    void do_something() override;
};


#endif //LAB01_INHERITANCE_MAURICEV7_DERIVED1_H
