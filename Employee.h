#pragma once
#include <string>
class Employee
{
private:
	std::string name;
	int id;
	float salary;
	static int employees;

public:
	Employee(const std::string& name, int id, float salary);
	~Employee();

	void displayInfo() const;
	static void getEmployeeCount();
};

