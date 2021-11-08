/* this is a header file - header files have .h or .hpp extensions
* header files should not contain function and variable definitions
* header files SHOULD contain class declarations
* header files SHOULD NOT contain class definitions
* A declaration provides the basic attributes of the class - its name and type
* A definition includes the implementation of methods
*/

//this header declares the Person class and its child classes, Student and Teacher
//it also declares the class attributes and methods

#include <string>
#include <vector>

//use all names in standard library
using namespace std;

//declaring the parent Person class
class Person {
  //parent attributes
  private:
    string fname;
    string lname;
    string email;
  
  public:
  //constructor declaration
  Person(string fn, string ln);
  
  //method declarations
  void displayProfile();
  void setEmail(string em);

}; //end base class

//declaring the teacher class that is the child of the person class
/*class Teacher: public Person {
  private:
  //class attributes
  vector<string> subjects;
  string division;
  vector<int> gradelvls;
  //class methods
  public:
  Teacher(string fn, string ln, vector<string> subs, string div, vector<int> gls);
  void displayProfile();

}; //end class definition
*/

//declaring a student class that is the child of the person class
/*class Student: public Person {
  private:
  //class attributes
  int gradyr;
  int admityr;
  int gradelvl;
  //class methods
  public:
  Student(string fn, string ln, int ay, int gy);
  void displayProfile();
  
};*/