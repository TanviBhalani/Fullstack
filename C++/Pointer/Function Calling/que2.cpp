// call by reference

#include <iostream>
using namespace std;

void sum(int &n){
    n = n + 10;
}

int main(){
    int a = 5;
    cout << "Before, a :" << a << endl;

    sum(a);
    cout << "After, a :" << a << endl;

    return 0;

}