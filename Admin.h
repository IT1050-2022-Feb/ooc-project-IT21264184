//Contributor IT21288630 Kulathunga.R.G.G.P

#pragma once
#include "User.h"
#include "Feedback.h"
#define size 3

class Admin : public User
{
private:
	string adid;
	Feedback *fed[size];

public:
	Admin();
	Admin(string id, string uname, string pass, int num, string mail);
	void setAdid(string id);
	void addFeedback(Feedback* f);
	string getAdid();
	string viewFeedback();
	void addAccount();
	void removeAccount();
	~Admin();
};
