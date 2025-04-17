#include <iostream>
using namespace std;

int main(){

    int arr2[3][3];

    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
           cout << "Enter the value : ";
           cin >> arr2[i][j];
        }
    }
 
    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
           cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}