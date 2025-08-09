#include "Employee.h"
#include <iostream>


int main() {
	Employee emp1("Richard Bawkins", 83285, 55000);
	Employee emp2("Reet Richards", 992, 120000);

	emp1.displayInfo();
	std::cout << "\n";
	emp2.displayInfo();

	Employee::getEmployeeCount();
}