#include <iostream>
using namespace std;

int main(){

    //Modification:
    
    int arr[5];

    cout << "Enter Four numbers: " << endl;

    for(int i=0; i<=4; i++){
        cin >> arr[i];
    }

    arr[3] = 100;

    for(int i=0; i<=4; i++){
        cout << arr[i] << endl;
    }
   
}