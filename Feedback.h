//Contributor IT21288630 Kulathunga.R.G.G.P

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Feedback
{
private:
	string fid;
	string status;

public:
	Feedback();
	Feedback(string id, string st);
	void setFid(string id);
	void setStatus(string st);
	string getFid();
	string getStatus();
	~Feedback();
};
 