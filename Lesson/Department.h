#pragma once
#include "Employee.h"
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Department
{
protected:
	vector <Employee*> employees;
	string name;

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

