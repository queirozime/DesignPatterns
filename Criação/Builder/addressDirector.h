#include <iostream>
#include "addressBuilder.h"
using namespace std;

#ifndef ADDRESSDIRECTOR_H
#define ADDRESSDIRECTOR_H

class AddressDirector
{
private:
    AddressBuilder *addressBuilder;

public:
    AddressDirector(AddressBuilder *addressBuilder)
    {
        this->addressBuilder = addressBuilder;
    }

    Address *getAddress()
    {
        return addressBuilder->build();
    }
};

#endif
