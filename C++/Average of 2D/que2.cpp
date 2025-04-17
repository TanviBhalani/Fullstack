#include <iostream>
using namespace std;

int main(){

    int row;
    int column;

    cout << "Enter the value for Rows : ";
    cin >> row;

    cout << "Enter the value for Column : ";
    cin >> column;

    int arr[row][column];

    

    for(int i=0; i<row; i++){
        for( int j=0; j<column; j++){
           cout << "Enter the value for Row : " << i << " Columnn : " << j << " : ";
           cin >> arr[i][j];
        }
    }
 
    for(int i=0; i<row; i++){
        for( int j=0; j<column; j++){
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int userRow;
    int rownum = 0;

    cout << "Enter the number of row to get the sum of that row : ";
    cin >> userRow;

    int sum = 0;
    
   
    for(int j=0; j<column; j++){
        rownum+= arr[userRow][j];
    }


    cout << "Sum of that row is : " << rownum;
    
}