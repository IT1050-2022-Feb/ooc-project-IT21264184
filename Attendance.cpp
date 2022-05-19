//Contibutor- H. M. N. D. S. Heenekenda - IT21323584

#include <iostream> 
#include<string> 
#include "Attendance.h" 

using namespace std; 

Attendance::Attendance()
{
}

Attendance::Attendance(string id)
{
	attid = id;
}

void Attendance::setAttid(string id)
{
    attid = id;
}
void Attendance::setDate(int d)
{
	Date = d;
}

void Attendance::setTime(int t)
{
	Time = t;
}

string Attendance::getAttid()
{
	return attid;
}

string Attendance::getDate()
{
	return date;
}

string Attendance::getTime()
{
	return time;
}

Attendance::~Attendance()
{
	cout<<"Attendance deleted!"<<endl;
}
