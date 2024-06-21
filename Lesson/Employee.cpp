
#include "Employee.h"

Employee::Employee()
{
    name = "undefind";
    position = "undefind";
    salary = 0;
}

Employee::Employee(string name, string positiong, float salary)
{
    this->name = name;
    this->position = positiong;
    this->salary = salary;
}

Employee::~Employee()
{
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setPosition(string position)
{
    this->position = position;
}

void Employee::setSalary(float salary)
{
    this->salary = salary;
}

string Employee::getName() const
{
    return name;
}

string Employee::getPosition() const
{
    return position;
}

float Employee::getSalary() const
{
    return salary;
}
