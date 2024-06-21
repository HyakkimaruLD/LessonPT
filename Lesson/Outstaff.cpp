#include "Outstaff.h"

Outstaff::Outstaff(string name, string position, double salary) : Employee(name, position, salary)
{
}

double Outstaff::calcSalary()
{
	return salary;
}
