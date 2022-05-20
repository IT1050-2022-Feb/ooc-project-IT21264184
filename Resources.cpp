//contributor - W.A.I.A.Bandara - IT21270710

#include <iostream>
#include "Resources.h"
#include <string>

using namespace std;


Resources::Resources() {

}
Resources::Resources(string id, string name) {
	rid = id;
	rName = name;
}
void Resources::setRid(char id) {
	rid = id;
}
void Resources::setRname(char name) {
	rName = name;
}
string Resources::getRid() {
	return rid;
}
string Resources::getRname() {
	return rName;
}
Resources::~Resources() {
	cout << "Resource deleted" << endl;
}
   