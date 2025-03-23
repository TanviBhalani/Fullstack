#include <iostream>
using namespace std;

int main(){

    int num = 41;
    int end = 5;
    
    for(int i=1; i<=end; i++){

        for(int j=0; j < i; j++){
            cout << num + j << " ";
        }
        cout << endl;
    } 

}