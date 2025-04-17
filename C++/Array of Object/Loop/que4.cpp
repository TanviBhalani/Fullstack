#include <iostream>
using namespace std;
#include <string.h>

class toys{
    private :
        int id;
        char brand[50];
        char occasion[50];
        char form[50];
        int age;
        int price;

    public :
        void setData(){
            cout << "Enter a id : ";
            cin >> this->id;  

            cout << "Enter a brand : ";
            cin >> this->brand;   

            cout << "Enter a occasion : ";
            cin >> this->occasion;    

            cout << "Enter a form : ";
            cin >> this->form;      

            cout << "Enter a age : ";
            cin >> this->age; 

            cout << "Enter a price : ";
            cin >> this->price; 
            
            cout << endl << endl;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Occasion : " << this->occasion << endl;
            cout << "Form : " << this->form << endl;
            cout << "Age : " << this->age << endl;
            cout << "Price : " << this->price << endl << endl;
        } 
};

int main(){

    cout << "Enter the number of toys you want to add : ";
    int num;
    cin >> num;

    toys obj[num];

    for(int i=0; i<num; i++){
        obj[i].setData();
    }

    for(int i=0; i<num; i++){
        obj[i].getData();
    }

    return 0;
}