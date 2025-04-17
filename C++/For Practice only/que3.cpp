#include <iostream>
using namespace std;

int main(){

    int num;
    
    cout << "Enter a number: ";
    cin >> num;
        
    cout << "Factor of " << num << " is " << endl;

    for(int i=1; i<=num; i++){
        if(num % i == 0){
            cout << i << endl;
        }
    }
    
}