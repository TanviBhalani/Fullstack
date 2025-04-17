#include <iostream>
using namespace std;

int main(){

    int a = 20;
    int *p = &a;
    int **p2 = &p;

    //Dereferencing a pointer
    cout << **p2;

    return 0;

}