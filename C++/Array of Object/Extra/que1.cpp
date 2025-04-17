#include <iostream>
using namespace std;
#include <string.h>

class student{
    private:
      int id;
      char name[50];
      char subject[50];
      char city[50];
      char gender[50];

    public :
       void setData(){

        cout << "Enter your id : ";
        cin >> this->id;
        
        cout << "Enter your name : ";
        cin >> this->name;

        cout << "Enter your subject : ";
        cin >> this->subject;

        cout << "Enter your city : ";
        cin >> this->city;

        cout << "Enter your gender : ";
        cin >> this->gender;

        cout << endl << endl;
       }

       void getData(){
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Subject : " << this->subject << endl;
        cout << "City : " << this->city << endl;
        cout << "Gender : " << this->gender << endl << endl;
       }
};

int main(){
    student one[3];

    one[0].setData();
    one[1].setData();
    one[2].setData();
    
    one[0].getData();
    one[1].getData();
    one[2].getData();
}