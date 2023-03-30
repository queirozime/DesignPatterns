#include <iostream>
#include "phone.h"

using namespace std;

#ifndef PHONEBUILDER_H
#define PHONEBUILDER_H

class PhoneBuilder
{
protected:
    Phone *phone;

public:
    PhoneBuilder()
    {
        phone = new Phone();
    }
    virtual void withDdd(string p) = 0;
    virtual void withNumber(string p) = 0;
    virtual void withType(string p) = 0;
    virtual Phone *build()
    {
        return phone;
    };
};

class ConcretePhoneBuilder : public PhoneBuilder
{
    void withDdd(string ddd)
    {
        phone->setDdd(ddd);
    }
    void withNumber(string number)
    {
        phone->setNumber(number);
    }
    void withType(string type)
    {
        phone->setType(type);
    }
};

#endif