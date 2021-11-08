//this file defines the class methods

//include required libraries
#include "people.hpp" //note the file in local dir is enclosed by ""
#include <iostream>
#include <string>
#include <vector>

//use all names in standard library
using namespace std;

//parent constructor
Person::Person(string fn, string ln) { 
  fname = fn;
  lname = ln;
  //pass the parameters to the attributes
  //constructor is empty
};

//parent method defined
void Person::displayProfile() {
    cout << "Name:"<< fname << " " << lname << endl ;
}

void Person::setEmail(string em) {
      //this method will take a string and store it to the email attribute
}

//defining a student class that is the child of the person class
/*
  void Student::displayProfile() {
    //call parent method
    Person::displayProfile();
    cout << "Admit Year:" << admityr << endl;
    cout << "Grad Year:" << gradyr << endl;
    cout << endl;
  }

//defining a teacher class that is the child of the person class

  void Teacher::displayProfile() {
    //call the parent method
    Person::displayProfile();
    cout << "Division:" << division << endl;
    cout << "Subjects:";

    //loop through subjects vector
    for (int s = 0; s < subjects.size(); s++) {
        cout << " " << subjects[s] << ",";
    }

    cout << endl;
    cout << "Grades Levels:";

    //loop through gradelevels vector
    for (int g = 0; g < gradelvls.size(); g++) {
        cout << " " << gradelvls[g] << ",";
    }
    cout << endl << endl;
  }
  */