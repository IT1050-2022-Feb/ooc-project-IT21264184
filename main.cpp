//Contributor IT21288630 Kulathunga.R.G.G.P
//contributor - W.A.I.A.Bandara - IT21270710
//contibutor - C.J Widanage - IT21244902
//Contributor- H. M. N. D. S. Heenekenda -IT21323584
//contributor-Wijerathne.R.V.A.N.S -IT21264184

#include<iostream> 
#include<string.h> 
#include "Attendance.h" 
#include "Manager.h" 
#include "Resources.h" 
#include "User.h" 
#include "Feedback.h" 
#include "Admin.h"
#include "Employee.h"
#include "Event.h" 
 using namespace std; 

int main()
{
  User* us1 = new user("Kusun", "hack1234", "0774567833", "Kusun@gmail.com");
  User* us2 = new user("Nimal", "sanka123", "0776783233", "Nimal@gmail.com");
  User* us3 = new user("Shanaka", "gihan1234", "0759876342", "Shanaka@gmail.com");
  
  Employee* em1 = new employee("e1", "1department");
  Employee* em2 = new employee("e2", "4department");
  Employee* em3 = new employee("e3", "3department");


  
  Attendance* at1 = new attendance("a1", "11/03/2020", "7.30AM");
  Attendance* at2 = new attendance("a1", "20/05/2020", "6.30PM");
  Attendance* at3 = new attendance("a1", "27/07/2020", "7.30AM");

  Feedback* fe1 = new Feedback("f1", "Good");
  Feedback* fe2 = new Feedback("f2", "Nice");
  Feedback* fe3 = new Feedback("f3", "Need improvement");

  Admin* ad1 = new Admin("a1", "Harry", "1234a", 0712354167, "harry@gmail.com");
  Admin* ad2 = new Admin("a2", "Tobi", "4567b", 0712345671, "tobi@gmail.com"); 
  Admin* ad3 = new Admin("a3", "Ethan", "8524c", 0714532116, "ethan@gmail.com"); 

  Event* eve1 = new Event("ev1" , "12/04/2020" , "9.00AM") ;
  Event* eve2 = new Event("ev2" ,"23/05/2020"  , "10.30AM");
  Event* eve3 = new Event("ev3" , "20/06/2020" , "6.30PM" );

  Resources* res1= new Resources("re1","Recruiting Process presentation slides");
  Resources* res2= new Resources("re2","Training and development presentation slides");
  Resources* res3= new Resources("re3","Career path planing presentation slides");

  Manager* mng1= new Manager("mang1","B.M.W.Rathanayake","Accounts Department");
  Manager* mng2= new Manager("mang1","K.S.Karunarathne","Stores Department");
  Manager* mng3= new Manager("mang1","K.T.M.Basnayake","Correspondence Department");
  
  return 0;
}
