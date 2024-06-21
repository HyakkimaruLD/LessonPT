#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class Staff : public Employee
{
protected:
	double bonus;
	
public:
	Staff(string name, string position, double salary, double bonus);

	void setBonus(double bonus);
	double getBonus() const;

	virtual void showInfo()const override;
	virtual float calcSalary()const override;



};

