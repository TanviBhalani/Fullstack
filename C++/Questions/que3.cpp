#include <iostream>
using namespace std;
int main(){
    
    int num;
    cout << "Enter a number to check is this even or odd:";
    cin >> num;

    if(num % 2 == 0){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }

    
}