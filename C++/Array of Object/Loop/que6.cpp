#include <iostream>
using namespace std;
#include <string.h>

class airpods{
    private :
        int id;
        char brand[50];
        char type[50];
        char color[50];
        char use[50];
        int price;

    public :
        void setData(){
            cout << "Enter a id : ";
            cin >> this->id;  

            cout << "Enter a brand : ";
            cin >> this->brand;  

            cout << "Enter a type : ";
            cin >> this->type;  

            cout << "Enter a color : ";
            cin >> this->color;  
            
            cout << "Enter a use : ";
            cin >> this->use;  
            
            cout << "Enter a price : ";
            cin >> this->price; 
            
            cout << endl << endl;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand: " << this->brand << endl;
            cout << "Type : " << this->type << endl;
            cout << "Color : " << this->color << endl;
            cout << "Use : " << this->use << endl;
            cout << "Price : " << this->price << endl << endl;
        } 
};

int main(){

    cout << "Enter the number of airpods you want to add : ";
    int num;
    cin >> num;

    airpods obj[num];

    for(int i=0; i<num; i++){
        obj[i].setData();
    }

    for(int i=0; i<num; i++){
        obj[i].getData();
    }

    return 0;
}