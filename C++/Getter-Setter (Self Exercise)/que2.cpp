#include <iostream>
using namespace std;
#include <string.h>

class bottle{
    private :
        int id;
        char material[50];
        char color[50];
        int price;
        float rating;

    public :
        void setData(int id,const char* material,const char* color,int price,float rating){
            this->id = id;
            strcpy(this->material,material);
            strcpy(this->color,color);
            this->price = price;
            this->rating = rating;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Material : " << this->material << endl;
            cout << "Color : " << this->color << endl;
            cout << "Price : " << this->price << endl;
            cout << "Rating : " << this->rating << endl << endl;
        } 
};

int main(){

    bottle one;
    one.setData(1,"Plastic","Black",159,4.5);
    one.getData();

    bottle two;
    two.setData(2,"Glass","Blue",219,4.9);
    two.getData();

    bottle three;
    three.setData(3,"Aluminium","Silver",299,4.8);
    three.getData();
}