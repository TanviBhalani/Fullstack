#include <iostream>
using namespace std;

int main(){

    int arr3[3][4];

    for(int i=0; i<3; i++){
        for( int j=0; j<4; j++){
           cout << "Enter the value : ";
           cin >> arr3[i][j];
        }
    }
 
    for(int i=0; i<3; i++){
        for( int j=0; j<4; j++){
           cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}