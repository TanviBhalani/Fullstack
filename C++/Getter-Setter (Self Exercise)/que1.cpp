#include <iostream>
using namespace std;
#include <string.h>

class watch{
    private :
        int id;
        char brand[50];
        char color[50];
        int price;
        float rating;

    public :
        void setData(int id,const char* brand,const char* color,int price,float rating){
            this->id = id;
            strcpy(this->brand,brand);
            strcpy(this->color,color);
            this->price = price;
            this->rating = rating;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Color : " << this->color << endl;
            cout << "Price : " << this->price << endl;
            cout << "Rating : " << this->rating << endl << endl;
        } 
};

int main(){

    watch one;
    one.setData(1,"Joker & Witch","Rose gold",3399,4.5);
    one.getData();

    watch two;
    two.setData(2,"Titan","Silver",5219,4.9);
    two.getData();
}