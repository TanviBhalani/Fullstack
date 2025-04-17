#include <iostream>
using namespace std;

int main(){


    int a = 20;
    int &ref = a; 
    cout << a << endl; //20
    cout << ref << endl; //20

    ref = 30;
    cout << a << endl; //30
    cout << ref; //30 

    return 0;

}