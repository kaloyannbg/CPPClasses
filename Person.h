#ifndef _PERSON_H_
#define _PERSON_H_

#include "Adress.h"

class Person
{

private:
    std::string pin;
    int height;
    int weight;
    std::string eyeColor;
    std::string firstName;
    std::string lastName;

public:
    void setPin(std::string pinVar);
    std::string getPin();

    void setHeight(int heightVar);
    int getHeight();

    void setWeight(int weightVar);
    int getWeight();

    void setEyeColor(std::string eyeColorVar);
    std::string getEyeColor();

    void setFirstName(std::string firstNameVar);
    std::string getFirstName();

    void setLastName(std::string lastNameVar);
    std::string getLastName();

    Adress personAdress;

    void printAllForUser();
};

#endif // !_PERSON_H_
