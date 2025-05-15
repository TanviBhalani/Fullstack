#include<iostream>
using namespace std;

//Method Overloading

class Calc{

    public:

    int sum (int a, int b){
        cout << a+b << endl;
    }

    int sum(int a, int b, int c){
        cout << a + b + c << endl;
    }    
};

int main(){

    Calc obj;

    obj.sum(12,12);
    obj.sum(12,12,12);

    return 0;

}