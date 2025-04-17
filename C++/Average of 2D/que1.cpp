#include <iostream>
using namespace std;

int main(){

    int arr [3][3] = {
        {12,14,16},
        {13,15,17},
        {18,20,22}
    };

    int sum = 0;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
    }

    cout << "Average of all elements : " << sum/9 << endl;
    cout << "Sum of all elements : " << sum;
    
}
