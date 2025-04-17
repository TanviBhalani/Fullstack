#include <iostream>
using namespace std;
#include <string.h> 

class person{
    private : 
        int id;
        char name[50];
        int age;

    public :
        void setData(int id, const char* name, int age){
            this->id = id;
            strcpy(this->name, name);
            this->age = age;
        }
    
        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Name : " << this->name << endl;
            cout << "Age : " << this->age << endl << endl;
        }
};

int main(){

    person one;
    person two;

    one.setData(1,"Tanvi",25);
    one.getData();

    two.setData(2,"Janvi",18);
    two.getData();

    return 0;

}