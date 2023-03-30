#include <iostream>
#include "contactBuilder.h"

using namespace std;

int main()
{
    AddressBuilder *addressBuilder = new ConcreteAddressBuilder();
    addressBuilder->withStreet("Rua 1");
    addressBuilder->withNumber("123");
    addressBuilder->withCity("São Paulo");
    addressBuilder->withState("SP");
    addressBuilder->withComplement("Casa 1");
    addressBuilder->withZipCode("12345-678");

    PhoneBuilder *phoneBuilder = new ConcretePhoneBuilder();
    phoneBuilder->withNumber("123456789");
    phoneBuilder->withType("Celular");
    phoneBuilder->withDdd("11");

    ContactBuilder *contactBuilder = new ConcreteContactBuilder();
    contactBuilder->withName("João");
    contactBuilder->withCpf("123.456.789-00");
    contactBuilder->withEmail("carlos@henricco");
    contactBuilder->withBirthDay("01");
    contactBuilder->withBirthMonth("01");
    contactBuilder->withBirthYear("2000");
    contactBuilder->withAddress(*addressBuilder);
    contactBuilder->withPhone(*phoneBuilder);
    Contact *contact = contactBuilder->build();
    cout << contact->getName() << endl;
    cout << contact->getCpf() << endl;
    cout << contact->getEmail() << endl;
    cout << contact->getBirthDay() << endl;
    cout << contact->getBirthMonth() << endl;
    cout << contact->getBirthYear() << endl;
    cout << contact->getAddress()->getStreet() << endl;
    cout << contact->getAddress()->getNumber() << endl;
    cout << contact->getAddress()->getCity() << endl;
    cout << contact->getAddress()->getState() << endl;
    cout << contact->getAddress()->getComplement() << endl;
    cout << contact->getAddress()->getZipCode() << endl;
    cout << contact->getPhone()->getNumber() << endl;
    cout << contact->getPhone()->getType() << endl;
    cout << contact->getPhone()->getDdd() << endl;

    return 0;
}