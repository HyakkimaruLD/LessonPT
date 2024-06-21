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

void Staff::showInfo() const
{
    cout << "Staff Info" << endl;
    cout << "Name: " << name << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << endl;
    cout << "Bonus: " << bonus << endl << endl;
}

float Staff::calcSalary() const
{
    return salary + bonus;
}
