//contributor-Wijerathne.R.V.A.N.S – IT21264184
#include <iostream>
#include <string.h>
#include "Employee.h"
using namespace std;

Employee::Employee(void)
{
	empId="";
	department="";
}

Employee::Employee(string Id, string Dep)
{
	empId= Id;
	department= Dep;
}

void Employee::setEmpId(string Id)
{
	empId= Id;
}

void Employee::setDepartment(string Dep)
{
	department= Dep;
}

string Employee::getEmpId()
{
	return empId;
}

string Employee::getDepartment()
{
	return department;
}

void Employee::markAttendance()
{
}

void Employee::requestResource()
{
}

void Employee::giveFeedback()
{
}

Employee::~Employee(void)
{
	cout << "Employee deleted" << endl;
}
