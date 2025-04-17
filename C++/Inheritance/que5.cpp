#include <iostream>
using namespace std;
#include <string.h>

//Hybrid inheritance

class Person
{
public:
  void person()
  {
    cout << "Greetings from Person" << endl;
  }
};

class Student :public Person 
{
public:
  void student() 
  {
    cout << "Greetings from Student" << endl;
  }
};

class Employee : public Person
{
public:
  void employee()
  {
    cout << "Greetings from Employee" << endl;
  }
};

class PartTimeStudent: public Student , public Employee
{
public:
  void part()
  {
    cout << "Greetings from Person" << endl;
  }
};

int main(){

   PartTimeStudent child;

   child.part();
   child.student();
   child.employee();
   child.Student::person();
}