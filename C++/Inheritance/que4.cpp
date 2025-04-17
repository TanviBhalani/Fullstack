#include <iostream>
using namespace std;
#include <string.h>

//Hierarchical inheritance

class GrandFather
{
public:
  void greet()
  {
    cout << "Greetings from GrandFather" << endl;
  }
};

class Father :public GrandFather 
{
public:
  void greet2() 
  {
    cout << "Greetings from  Father" << endl;
  }
};

class Uncle : public GrandFather
{
public:
  void greet3()
  {
    cout << "Greetings from Uncle" << endl;
  }
};

int main(){

    Father obj;
    obj.greet();
    obj.greet2();

    Uncle obj2;
    obj2.greet();
    obj2.greet3();
}