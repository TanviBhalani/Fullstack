#include <iostream>
using namespace std;
#include <string.h>

class footwear{
    private :
        int id;
        char brand[50];
        char department[50];
        char style[50];
        int size;
        int price;

    public :
        void setData(int id,const char* brand,const char* department,const char* style,int size,int price){
            this->id = id;
            strcpy(this->brand,brand);
            strcpy(this->department,department);
            strcpy(this->style,style);
            this->size = size;
            this->price = price;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Department : " << this->department << endl;
            cout << "Style : " << this->style << endl;
            cout << "Size : " << this->size << endl;
            cout << "Price : " << this->price << endl << endl;
        } 
};

int main(){

    footwear one;
    one.setData(1,"Nike","Men's","Running-Shoes",8,1699);
    one.getData();

    footwear two;
    two.setData(2,"Adidas","Childern's","Sports-shoes",5,789);
    two.getData();
}