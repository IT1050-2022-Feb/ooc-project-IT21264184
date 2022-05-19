//Contibutor- H. M. N. D. S. Heenekenda - IT21323584

#pragma once 

class Attendance

{
	private:
		int date;
		int time;
		string attid;
		
	public:
		Attendance();
		Attendance(string id);
		
		void setAttid(string id);
		void setDate();
		void setTime();
		string getAttid();
		int getDate;
		int getTime;
		
		~Attendance();
		
};
 