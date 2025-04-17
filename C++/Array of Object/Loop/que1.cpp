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

        cout << "Enter Your Id : ";
        cin >> this->id;
        
        cout << "Enter Your Name : ";
        cin >> this->name;

        cout << "Enter Your Subject : ";
        cin >> this->subject;

        cout << "Enter Your City : ";
        cin >> this->city;

        cout << "Enter Your Gender : ";
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

    cout << "Welcome to student registration portal !" << endl << endl;

    cout << "Enter the number of students you want  toadd : ";
    int num;
    cin >> num;

    student obj[num];

    for(int i=0; i<num; i++){
        obj[i].setData();
    }

    for(int i=0; i<num; i++){
        obj[i].getData();
    }

    return 0;

}