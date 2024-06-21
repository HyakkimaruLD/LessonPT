#pragma once
#include "Employee.h"

class Outstaff : public Employee
{

public:
	Outstaff(string name, string position, double salary);

	double calcSalary();
};

