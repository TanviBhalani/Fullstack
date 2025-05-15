#include <iostream>
using namespace std;


int main(){

    int *arr = new int[5];
    delete[] arr;

    arr = NULL;

    if(arr == NULL){
        cout << "Memory alloction is unsuccessfull!";
    }
    else{
        cout << "Memory alloction is successfull!";
    }
}