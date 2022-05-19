//contributor-Wijerathne.R.V.A.N.S – IT21264184
#include <iostream>
#include "User.h"
#include <string.h>
using namespace std;

User::User(void)
{
}

void User::setUsername(string uname)
{
	username = uname;
}

void User::setPassword(string pass)
{
	Password = pass;
}

void User::setEmail(string mail)
{
	email = mail;
}

void User::setPhone(const int num)
{
	phone = num;
}

string User::getUsername()
{
	return username;
}

string User::getPassword()
{
	return password;
}

string User::getEmail()
{
	return email;
}

int* User::getPhone()
{
	return phone;
}

void User::DisplayUserdetails()
{
     cout <<"Username : "<< username << endl;     
     cout <<"Password : "<< password << endl;         
     cout <<"Phone Number : "<< phone << endl;     
     cout << "Email : "<< email << endl; 
}

User::~User()
{   
	cout<<"User deleted "<< endl; 
} 

