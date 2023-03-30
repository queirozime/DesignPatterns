#include <iostream>
#include "address.h"
using namespace std;

#ifndef ADDRESSBUILDER_H
#define ADDRESSBUILDER_H

class AddressBuilder
{
protected:
    Address *address;

public:
    AddressBuilder()
    {
        address = new Address();
    }

    virtual void withStreet(string p) = 0;
    virtual void withNumber(string p) = 0;
    virtual void withCity(string p) = 0;
    virtual void withState(string p) = 0;
    virtual void withComplement(string p) = 0;
    virtual void withZipCode(string p) = 0;
    virtual Address *build()
    {
        return address;
    };
};

class ConcreteAddressBuilder : public AddressBuilder
{
public:
    void withStreet(string street)
    {
        address->setStreet(street);
    }
    void withNumber(string number)
    {
        address->setNumber(number);
    }
    void withCity(string city)
    {
        address->setCity(city);
    }
    void withState(string state)
    {
        address->setState(state);
    }
    void withComplement(string complement)
    {
        address->setComplement(complement);
    }
    void withZipCode(string zipCode)
    {
        address->setZipCode(zipCode);
    }
};

#endif
