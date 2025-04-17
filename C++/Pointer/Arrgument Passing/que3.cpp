//passing a pointer

#include <iostream>
using namespace std;

void sum(int *ptr){
    cout << *ptr;
}

int main(){

    int a = 5;
    int *p = &a;
    sum(p);
    
    return 0;
}