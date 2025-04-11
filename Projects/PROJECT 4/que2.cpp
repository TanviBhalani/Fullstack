#include<iostream>
using namespace std;

int main(){

    int row, col;

    cout << "Enter the array's row size: ";
    cin >> row;
    cout << "Enter the array's column size: ";
    cin >> col;

    int a[row][col];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    int maxElement = a[0][0];

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (a[i][j] > maxElement){
                maxElement = a[i][j];
            }
        }
    }

    cout << "The largest elements is : " << maxElement;

}