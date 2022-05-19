//Contributor IT21288630 Kulathunga.R.G.G.P

#include "Admin.h"
#include <iostream>
using namespace std;

Admin::Admin()
{
	adid = "";
	username = "";
	password = "";
	phone = 0;
	email = "";
}

Admin::Admin(string id, string uname, string pass, int num, string mail)
{
	adid = id;
	username = uname;
	password = pass;
	phone = num;
	email = mail;
}

void Admin::setAdid(string id)
{
	adid = id;
}

void Admin::addFeedback(Feedback *f)
{

}

string Admin::getAdid()
{
	return adid;
}

Admin::~Admin()
{
	cout << "Admin deleted" << endl;
}
