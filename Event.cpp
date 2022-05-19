//contibutor - C.J Widanage - IT21244902
#include<iostream>
#include<string.h>
#include "Event.h"
using namespace std;

Event::Event(){
}
Event::Event(string id, int d, int t){

   eventid = id;
   date=d;
   time=t;
}
void Admin::setEventid(string id){

  eventid = id;
}
void Admin::setDate(int d){

  date=d;
}
void Admin::setTime(int t){

  time=t;
}
char Admin::getEventid(){
}
int Admin::getDate(){
}
int Admin::getTime(){
}
