#include "Outstaff.h"

Outstaff::Outstaff(string name, string position, double salary) : Employee(name, position, salary)
{
}

void Outstaff::showInfo() const
{
	cout << "Outstaff Info" << endl;
	cout << "Name: " << name << endl;
	cout << "Position: " << position << endl;
	cout << "Salary: " << salary << endl << endl;
}

float Outstaff::calcSalary() const
{
	return salary;
}



