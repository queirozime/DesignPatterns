#include <iostream>
#include "phoneDirector.h"
using namespace std;

#ifndef PHONEDIRECTOR_H
#define PHONEDIRECTOR_H

class PhoneDirector
{
private:
    PhoneBuilder *phoneBuilder;

public:
    PhoneDirector(PhoneBuilder *phoneBuilder)
    {
        this->phoneBuilder = phoneBuilder;
    }

    Phone *getPhone()
    {
        return phoneBuilder->build();
    }
};

#endif