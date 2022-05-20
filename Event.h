//contibutor - C.J Widanage - IT21244902

#include "Manger.h"

class Event{

     private:
       string eventid;
       int date;
       int time;

     public:
       Event();
       Event(string id, int d, int t);
       void setEventid(string i);
       void setDate(int d);
       void setTime(int t);
       char getEventid();
       int getDate();
       int getTime();
       ~Event();
};
