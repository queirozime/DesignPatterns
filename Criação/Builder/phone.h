#include <iostream>
using namespace std;

class Phone
{
private:
    string ddd;
    string number;
    string type;

public:
    Phone()
    {
        ddd = "";
        number = "";
        type = "";
    };

    void setDdd(string &ddd) { this->ddd = ddd; }
    void setNumber(string &number) { this->number = number; }
    void setType(string &type) { this->type = type; }

    string getDdd() const { return ddd; }
    string getNumber() const { return number; }
    string getType() const { return type; }
};