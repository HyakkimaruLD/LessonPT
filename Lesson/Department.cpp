#include "Department.h"

Department::Department()
{
    name = "undefind";
}

Department::Department(string name)
{
    this->name = name;
}

void Department::setNameDepartment(string name)
{
    this->name = name;
}

string Department::getNameDepartment() const
{
    return name;
}

void Department::addEmployee(Employee* employee)
{
    employees.push_back(employee);
}

void Department::shoAllEmployee()
{
    for (auto employee : employees) 
    {
        employee->showInfo();
    }
}

void Department::deleteEmployee(string name)
{
    for (auto i = employees.begin(); i != employees.end(); i++) 
    {
        if ((*i)->getName() == name) 
        {
            delete* i;
            employees.erase(i);
            cout << "Employee " << name << " has been removed" << endl;
            return;
        }
    }
    cout << "Employee " << name << " not found" << endl;
}

void Department::findEmployee(string name)
{
    for (auto employee : employees) 
    {
        if (employee->getName() == name) 
        {
            employee->showInfo();
            return;
        }
    }
    cout << "Employee " << name << " not found" << endl;
}
