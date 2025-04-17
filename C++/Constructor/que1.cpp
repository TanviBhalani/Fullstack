#include <iostream>
using namespace std;

class person{

    private :
    char name[50];
    int age;
    char city[50];

    public : 

    //default constructor
    person(){
        cout << "Hello world !";
    }

};

int main(){

    person obj;

    return 0;
    
}