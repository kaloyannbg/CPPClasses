#include "Adress.h"

void Adress::setCity(std::string cityVar)
{
    if (cityVar.length() < 2)
    {
        city = "Invalid";
        return;
    }

    city = cityVar;
}

std::string Adress::getCity()
{
    return city;
}

void Adress::setCountry(std::string countryVar)
{
    country = countryVar;
}
std::string Adress::setCountry()
{
    return country;
}

void Adress::setStreet(std::string streetVar)
{
    street = streetVar;
}
std::string Adress::getStreet()
{
    return street;
}

void Adress::setStreetNumber(int streetNumberVar)
{
    streetNumber = streetNumberVar;
}
int Adress::getStreetNumber()
{
    return streetNumber;
}

void Adress::setHood(std::string hoodVar)
{
    hood = hoodVar;
}
std::string Adress::getHood()
{
    return hood;
}

void Adress::setBlockNumber(int blockNumberVar)
{
    blockNumber = blockNumberVar;
}
int Adress::getBlockNumber()
{
    return blockNumber;
}

void Adress::printAllForUser()
{
    std::cout << "City: " << this->getCity() << std::endl;
    std::cout << "Street: " << this->getStreet() << std::endl;
    std::cout << "Block number: " << this->getBlockNumber() << std::endl;
    std::cout << "Hood: " << this->hood << std::endl;
}