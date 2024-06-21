#include "Staff.h"

Staff::Staff(string name, string position, double salary, double bonus) : Employee(name, position, salary)
{
    this->bonus = bonus;
}

void Staff::setBonus(double bonus)
{
    this->bonus = bonus;
}

double Staff::getBonus() const
{
    return bonus;
}

double Staff::calcSalary()
{
    return salary + bonus;
}
