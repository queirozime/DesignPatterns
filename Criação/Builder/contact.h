#include <iostream>
#include "phoneBuilder.h"
#include "addressBuilder.h"

using namespace std;

#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
private:
    string name;
    string cpf;
    string email;
    string birthDay;
    string birthMonth;
    string birthYear;
    Address *address;
    Phone *phone;

public:
    Contact(){};

    void setName(string &name) { this->name = name; }
    void setCpf(string &cpf) { this->cpf = cpf; }
    void setEmail(string &email) { this->email = email; }
    void setBirthDay(string &birthDay) { this->birthDay = birthDay; }
    void setBirthMonth(string &birthMonth) { this->birthMonth = birthMonth; }
    void setBirthYear(string &birthYear) { this->birthYear = birthYear; }
    void setAddress(AddressBuilder &addressBuilder) { this->address = addressBuilder.build(); }
    void setPhone(PhoneBuilder &phoneBuilder) { this->phone = phoneBuilder.build(); }

    string getName() const { return name; }
    string getCpf() const { return cpf; }
    string getEmail() const { return email; }
    string getBirthDay() const { return birthDay; }
    string getBirthMonth() const { return birthMonth; }
    string getBirthYear() const { return birthYear; }
    Address *getAddress() const { return address; }
    Phone *getPhone() const { return phone; }
};

#endif