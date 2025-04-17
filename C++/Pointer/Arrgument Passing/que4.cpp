//passing an address

#include <iostream>
using namespace std;

void sum(int *ptr){
    cout << *ptr;
}

int main(){

    int a = 5;
    sum(&a);
    
    return 0;
}