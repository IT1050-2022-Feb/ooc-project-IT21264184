#pragma once

class Manager:Attendance
{
private:
	string mgrid;
	string department;
  string Mname;

public:
	Manager();
	Manager(string id, string name, string dep) ;

	void setMgrid(char id);
  void setMgname(string name);
	void setDepartment(string dep);
  void getMgrid();
  void getMgname();
  void getDep();
	
	string viewAttendance();
	string checkResourceRequest();

	void organizeEvent();
	void contactEmployee();
	void updateEvents();

	~Manager();

};

