#include <iostream>
using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
private:
    string street;
    string number;
    string city;
    string state;
    string complement;
    string zipCode;

public:
    Address()
    {
        street = "";
        number = "";
        city = "";
        state = "";
        complement = "";
        zipCode = "";
    };

    void setStreet(string &street) { this->street = street; }
    void setNumber(string &number) { this->number = number; }
    void setCity(string &city) { this->city = city; }
    void setState(string &state) { this->state = state; }
    void setComplement(string &complement) { this->complement = complement; }
    void setZipCode(string &zipCode) { this->zipCode = zipCode; }

    string getStreet() { return street; }
    string getNumber() { return number; }
    string getCity() { return city; }
    string getState() { return state; }
    string getComplement() { return complement; }
    string getZipCode() { return zipCode; }
};

#endif