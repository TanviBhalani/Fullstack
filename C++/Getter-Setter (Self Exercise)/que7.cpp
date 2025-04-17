#include <iostream>
using namespace std;
#include <string.h>

class laptop{
    private :
        int id;
        char brand[50];
        int weight;
        char speed[50];
        char capacity[50];
        int budget;

    public :
        void setData(){
            cout << "Enter a id : ";
            cin >> this->id;  

            cout << "Enter a brand : ";
            cin >> this->brand;   

            cout << "Enter a weight : ";
            cin >> this->weight;    

            cout << "Enter a speed : ";
            cin >> this->speed;     
            
            cout << "Enter a capacity : ";
            cin >> this->capacity; 

            cout << "Enter your budget : ";
            cin >> this->budget; 
            
            cout << endl << endl;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Weight : " << this->weight << endl;
            cout << "Speed : " << this->speed << endl;
            cout << "Capacity : " << this->capacity << endl;
            cout << "Budget : " << this->budget << endl << endl;
        } 
};

int main(){

    laptop one;
    laptop two;

    one.setData();
    two.setData();

    one.getData();
    two.getData();
}