#include "Employee.h"

void Employee::addBalance()
{
    double plusValue = 0;

    std::cout << "How much money do you want to add to balance: " << std::endl;

    std::cin >> plusValue;

    dBalance += plusValue;
}
void Employee::withdrawalBalance()
{
    double minusValue = 0;

    std::cout << "How much money do you want to withdrawal from balance: " << std::endl;

    std::cin >> minusValue;

    if (minusValue > dBalance)
    {
        std::cout << "Sorry, but you do not have enough balance." << std::endl;
        return;
    }

    dBalance -= minusValue;
}
void Employee::printBalance()
{
    std::cout << "Your balance: " << dBalance << std::endl;
}