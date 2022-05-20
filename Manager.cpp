//contributor - W.A.I.A.Bandara - IT21270710

#include <iostream>
#include "Manager.h"
#include "Attendance"
#include <string.h>

using namespace std;

Manager::Manager() {

}
Manager::Manager(string id, string name, string dep) {
	mgrid = id;
  Mname = name
  department = dep;
}

void Manager::setMgname(string name){
  Mname = name;
}
void Manager::setMgrid(char id) {
	mgrid = id;
}
void Manager::setDepartment(string dep) {
	department = dep;
}

string Manager::getMgrid() {
	return mgrid;
}
string Manager::getMgname() {
	return Mname;
}
string Manager::getDep() {
	return department;
}
string Attendance::viewAttendance() {

}
string Manager::checkResourceRequest() {

}

void Manager::organizeEvent() {

}
void Manager::contactEmployee(){
}

void Manager::updateEvents(){

}

Manager::~Manager(){
	cout << "Manager deleted!" << endl;
}

  