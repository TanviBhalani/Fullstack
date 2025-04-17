#include <iostream>
using namespace std;
#include <string.h>

//Mutilevel inheritance

class GrandParent
{
public:
  void greet()
  {
    cout << "Greetings from grand parents" << endl;
  }
};

class Parent : public GrandParent
{
public:
  void greet2() 
  {
    cout << "Greetings from  parents" << endl;
  }
};

class Child : public Parent
{
public:
  void greet3()
  {
    cout << "Greetings from Child" << endl;
  }
};

int main(){

    Child obj;
    obj.greet();
    obj.greet2();
    obj.greet3();
}
