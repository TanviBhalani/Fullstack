#include <iostream>
using namespace std;
#include <string.h>

class book{
    private :
        int id;
        char name[50];
        int price;
        char bestseller[50];
        int rating;

    public :
        void setData(){
            cout << "Enter a id : ";
            cin >> this->id;  

            cout << "Enter a book name : ";
            cin >> this->name;   

            cout << "Enter a book price : ";
            cin >> this->price;    

            cout << "Enter a bestseller : ";
            cin >> this->bestseller;      

            cout << "Enter book rating : ";
            cin >> this->rating; 
            
            cout << endl << endl;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Name : " << this->name << endl;
            cout << "Price : " << this->price << endl;
            cout << "Bestseller : " << this->bestseller << endl;
            cout << "Rating : " << this->rating << endl << endl;
        } 
};

int main(){

    cout << "Enter the number of book you want to add : ";
    int num;
    cin >> num;

    book obj[num];

    for(int i=0; i<num; i++){
        obj[i].setData();
    }

    for(int i=0; i<num; i++){
        obj[i].getData();
    }

    return 0;
}