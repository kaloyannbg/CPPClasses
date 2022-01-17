#include "Adress.h"
#include "Person.h"
#include "Employee.h"
int main(int argc, char const *argv[])
{

    Person Nikolay;

    Nikolay.personAdress.setCity("Bourgas");
    Nikolay.personAdress.setStreet("Rayonna");
    Nikolay.personAdress.setHood("Meden Rudnik");

    Nikolay.setFirstName("Nikolay");
    Nikolay.setLastName("Mitev");
    Nikolay.setEyeColor("Red");
    Nikolay.setHeight(120);
    Nikolay.setPin("0002232422");

    Nikolay.printAllForUser();

    Employee Tsvetelin;

    Tsvetelin.addBalance();
    Tsvetelin.printBalance();
    Tsvetelin.withdrawalBalance();
    Tsvetelin.printBalance();

    return 0;
}
