#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;


// Assign studentId and name
Student::assignDetails(int S_id,char Sname[]) {
  studentId = S_id;
  strcpy(name,Sname);
}

Student::display() {
  
  cout << "Student ID:"<< studentId << endl;
  cout << "Name:"<< name << endl;

}
