#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "Person.h"
#include "Adress.h"

class Employee : protected Person
{

private:
    double dBalance;

public:
    void addBalance();
    void withdrawalBalance();
    void printBalance();
};

#endif // !_PERSON_H_
