#include <iostream>
using namespace std;
#include <string.h>

class student{
    private:
      int id;
      char name[50];
      int age;
      char city[50];
      char subject[50];

    public :
       void setData(){

        cout << "Enter your id number : ";
        cin >> this->id;
        
        cout << "Enter your name : ";
        cin >> this->name;

        cout << "Enter your age : ";
        cin >> this->age;

        cout << "Enter your city name : ";
        cin >> this->city;

        cout << "Enter your subject name : ";
        cin >> this->subject;

        cout << endl << endl;
       }

       void getData(){
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "City : " << this->city << endl;
        cout << "Subject/Course : " << this->subject << endl << endl;
       }
};

int main(){
    student one;
    one.setData();
    one.getData();
}