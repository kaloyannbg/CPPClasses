#include "Person.h"

void Person::setPin(std::string pinVar)
{
    if (pinVar.length() != 10)
    {
        pin = "Invalid";
        return;
    }

    pin = pinVar;
}
std::string Person::getPin()
{
    return pin;
}

void Person::setHeight(int heightVar)
{
    height = heightVar;
}
int Person::getHeight()
{
    return height;
}

void Person::setWeight(int weightVar)
{
    weight = weightVar;
}
int Person::getWeight()
{
    return weight;
}

void Person::setEyeColor(std::string eyeColorVar)
{
    eyeColor = eyeColorVar;
}
std::string Person::getEyeColor()
{
    return eyeColor;
}

void Person::setFirstName(std::string firstNameVar)
{
    firstName = firstNameVar;
}
std::string Person::getFirstName()
{
    return firstName;
}

void Person::setLastName(std::string lastNameVar)
{
    lastName = lastNameVar;
}
std::string Person::getLastName()
{
    return lastName;
}

void Person::printAllForUser()
{
    std::cout << "firstName: " << this->getFirstName() << std::endl;
    std::cout << "lastName: " << this->getLastName() << std::endl;
    std::cout << "eye Color: " << this->getEyeColor() << std::endl;
    std::cout << "Height: " << this->getHeight() << std::endl;

    personAdress.printAllForUser();
}