#include <iostream>
using namespace std;
#include <string.h>

class jewellery{
    private :
        int id;
        char name[50];
        char jewel[50];
        int price;
        float rating;

    public :
        void setData(int id,const char* name,const char* jewel,int price,float rating){
            this->id = id;
            strcpy(this->name,name);
            strcpy(this->jewel,jewel);
            this->price = price;
            this->rating = rating;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Name : " << this->name << endl;
            cout << "Jewel : " << this->jewel << endl;
            cout << "Price : " << this->price << endl;
            cout << "Rating : " << this->rating << endl << endl;
        } 
};

int main(){

    jewellery one;
    one.setData(1,"Ring","Pearl",3399,4.5);
    one.getData();

    jewellery two;
    two.setData(2,"Crown","Ruby",8219,4.9);
    two.getData();
}