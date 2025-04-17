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
       void setData(int id,const char* name,int age,const char* city,const char* subject){
        this->id = id;
        strcpy(this->name,name);
        this->age = age;
        strcpy(this->city,city);
        strcpy(this->subject,subject);    
       }

       void getData(){
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "City : " << this->city << endl;
        cout << "Course : " << this->subject;
       }
};

int main(){
    student one;
    one.setData(1,"Tanvi",19,"Rajkot","Full stack");
    one.getData();
}