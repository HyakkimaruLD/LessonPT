#pragma once
#include "Employee.h"

class Outstaff : public Employee
{

public:
	Outstaff(string name, string position, double salary);

	double calcSalary();

	virtual void showInfo()const override;
	virtual float calcSalary()const override;
};

