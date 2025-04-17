#include <iostream>
using namespace std;
#include <string.h>

class bike{
    private :
        int id;
        char brand[50];
        char type[50];
        char material[50];
        int price;

    public :
        void setData(int id,const char* brand,const char* type,const char* material,int price){
            this->id = id;
            strcpy(this->brand,brand);
            strcpy(this->type,type);
            strcpy(this->material,material);
            this->price = price;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Type : " << this->type << endl;
            cout << "Material : " << this->material << endl;
            cout << "Price : " << this->price << endl << endl;
        } 
};

int main(){

    bike one;
    one.setData(1,"Kent","Mountain","Steel",3999);
    one.getData();

    bike two;
    two.setData(2,"Hyffy","BMX","Aluminium",9503);
    two.getData();
}