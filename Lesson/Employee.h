#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
	string name;
	string position;
	float salary;
public:
	Employee();
	Employee(string name, string position, float salary);
	virtual ~Employee();

	void setName(string name);
	void setPosition(string position);
	void setSalary(float salary);

	string getName()const;
	string getPosition()const;
	float getSalary()const;

	virtual void showInfo()const = 0;
	virtual float calcSalary()const = 0;
};