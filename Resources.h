//contributor - W.A.I.A.Bandara - IT21270710

#pragma once
class Resources
{
private:
	string rid;
	string rName;

public:
	Resources();
	Resources(string id, string name);
	
	void setRid(char id);
	void setRname(char name);
	string getRid();
	string getRname();
	~Resources();
};

  