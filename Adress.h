#ifndef _ADRESS_H_
#define _ADRESS_H_

#include <iostream>
#include <string>

class Adress
{

private:
    std::string city;
    std::string country;
    std::string street;
    int streetNumber;
    std::string hood;
    int blockNumber;

public:
    void setCity(std::string cityVar);
    std::string getCity();

    void setCountry(std::string countryVar);
    std::string setCountry();

    void setStreet(std::string streetVar);
    std::string getStreet();

    void setStreetNumber(int streetNumberVar);
    int getStreetNumber();

    void setHood(std::string hoodVar);
    std::string getHood();

    void setBlockNumber(int blockNumberVar);
    int getBlockNumber();

    void printAllForUser();
};

#endif // !_ADRESS_H_
