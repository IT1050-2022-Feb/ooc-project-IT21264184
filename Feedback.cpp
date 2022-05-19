//Contributor IT21288630 Kulathunga.R.G.G.P

#include "Feedback.h"
#include <iostream>

Feedback::Feedback()
{
	fid = "";
	status = "";
}

Feedback::Feedback(string id, string st)
{
	fid = id;
	status = st;
}

void Feedback::setFid(string id)
{
	fid = id;
}

void Feedback::setStatus(string st)
{
	status = st;
}

string Feedback::getFid()
{
	return fid;
}

string Feedback::getStatus()
{
	return status;
}

Feedback::~Feedback()
{
	cout << "Feedback deleted" << endl;
}
