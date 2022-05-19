//contributor-Wijerathne.R.V.A.N.S – IT21264184
#pragma once 
class User
{   
protected:
	 int phone;     
	 string username;     
	 string email;     
	 string password;    
public:     
	User();     
	void setUsername(string uname);     
	void setPassword(string pass);     
	void setEmail(string mail);     
	void setPhone(string num);     
	string getUsername();     
	string getPassword();     
	string getEmail();     
	string getPhone();     
	virtual void DisplayUserdetails(); 
    ~User(); 
}; 
