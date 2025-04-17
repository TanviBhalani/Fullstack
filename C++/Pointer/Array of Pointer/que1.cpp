#include <iostream>
using namespace std;

int main(){

    int arr[5] = {5,10,15,20,25};

    int *ptr[5];

    //store
    for(int i=0; i<5; i++){
        ptr[i] = &arr[i];
    }

    //print
    for(int i=0; i<5; i++){
        cout << *ptr[i] << endl;
    }

    return 0;

}