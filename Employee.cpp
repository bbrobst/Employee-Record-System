#include "Employee.h"
#include <iostream>

int Employee::employees = 0;

Employee::Employee(const std::string& name, int id, float salary)
	: name(name), id(id), salary(salary)
{
	employees++;
}

Employee::~Employee()
{
	employees--;
	std::cout << "Employee " << name << " destroyed. Remaining: " << Employee::employees << "\n";
}

void Employee::displayInfo() const
{
	std::cout << "*** Employee Info ***\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "ID: " << id << "\n";
	std::cout << "Salary: $" << salary << "\n";
}

void Employee::getEmployeeCount()
{
	std::cout << "Current employee count: " << Employee::employees << "\n";
}
