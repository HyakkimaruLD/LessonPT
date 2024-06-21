#pragma once
#include "Employee.h"
#include <vector>
#include <algorithm>

class Department
{
protected:
	vector <Employee*> employees;

public:
	Department();
	Department(string name);

	void setNameDepartment(string name);

	string getNameDepartment()const;

	void addEmployee(Employee* employee);
	void shoAllEmployee();
	void deleteEmployee(string name);
	void findEmployee(string name);
};

