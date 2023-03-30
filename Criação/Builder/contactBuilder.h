#include <iostream>
#include "contact.h"

using namespace std;

#ifndef CONTACTBUILDER_H
#define CONTACTBUILDER_H

class ContactBuilder
{
protected:
    Contact *contact;

public:
    ContactBuilder()
    {
        contact = new Contact();
    }
    virtual void withName(string p) = 0;
    virtual void withCpf(string p) = 0;
    virtual void withEmail(string p) = 0;
    virtual void withBirthDay(string p) = 0;
    virtual void withBirthMonth(string p) = 0;
    virtual void withBirthYear(string p) = 0;
    virtual void withAddress(AddressBuilder &p) = 0;
    virtual void withPhone(PhoneBuilder &p) = 0;
    virtual Contact *build()
    {
        return contact;
    };
};

class ConcreteContactBuilder : public ContactBuilder
{
public:
    void withName(string name)
    {
        contact->setName(name);
    }
    void withCpf(string cpf)
    {
        contact->setCpf(cpf);
    }
    void withEmail(string email)
    {
        contact->setEmail(email);
    }
    void withBirthDay(string day)
    {
        contact->setBirthDay(day);
    }
    void withBirthMonth(string month)
    {
        contact->setBirthMonth(month);
    }
    void withBirthYear(string year)
    {
        contact->setBirthYear(year);
    }
    void withAddress(AddressBuilder &builder)
    {
        contact->setAddress(builder);
    }
    void withPhone(PhoneBuilder &builder)
    {
        contact->setPhone(builder);
    }
};

#endif