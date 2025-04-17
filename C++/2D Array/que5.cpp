#include <iostream>
using namespace std;

int main(){

    int arr3[2][5];

    for(int i=0; i<2; i++){
        for( int j=0; j<5; j++){
           cout << "Enter the value : ";
           cin >> arr3[i][j];
        }
    }
 
    for(int i=0; i<2; i++){
        for( int j=0; j<5; j++){
           cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}