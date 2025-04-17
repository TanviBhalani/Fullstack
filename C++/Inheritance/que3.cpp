#include <iostream>
using namespace std;
#include <string.h>

//Mutiple inheritance

class Father
{
public:
  void greet()
  {
    cout << "Greetings from Father" << endl;
  }
};

class Mother 
{
public:
  void greet2() 
  {
    cout << "Greetings from  Mother" << endl;
  }
};

class Child : public Father, public Mother
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