
//contributor-Wijerathne.R.V.A.N.S – IT21264184
#pragma once

class Employee
{
private:
	string empId;
	string department;

public:
	Employee();
	Employee(string Id, string Dep);
	void setEmpId(string Id);
	void setDepartment(string Dep[]);
	string getEmpId();
	string getDepartment;
	void markAttendance();
	void requestResource();
	void giveFeedback();
	~Employee(void);
};
