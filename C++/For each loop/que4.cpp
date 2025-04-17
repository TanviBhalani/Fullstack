#include <iostream>
using namespace std;

int main(){

    int arr[5] = {12,37,50,78,90};
    int arr2[5] = {12,37,50,78,90};
    int arr3[5];

    for (int i=0; i<=4; i++){
        arr3[i] = arr[i] + arr2[i];
    }

    for (int a : arr3){
        cout << a << endl;
    }
    
}