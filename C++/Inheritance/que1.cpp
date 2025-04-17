#include <iostream>
using namespace std;
#include <string.h>

//Simple/Single level inheritance

class parents{
    char bike[50];

    public :
    void greet(){
        cout << "Greeting from parents..!" << endl;
    }
};

class child : public parents{
    public :
    void greet2(){
        cout << "Greeting from child..!";
    }
};

int main(){
    
    child obj;
    obj.greet();
    obj.greet2();

    return 0;
}
