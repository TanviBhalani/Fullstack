// passing an array

#include <iostream>
using namespace std;

void sum(int arr[]){
    cout << arr[1];
}

int main(){
    int a[3] = {6,3,9};
    sum(a);
    
    return 0;
}