#include <iostream>
using namespace std;

int main(){

    int *ptr;
    int a = 10;

    ptr = &a;

    cout << ptr << endl;

    //Dereferencing a pointer
    cout << *ptr;

    return 0;

}