#include <iostream>
using namespace std;
int main(){
    
    int num;

    cout << "Enter an age to check he/she is eligible for vote or note:";
    cin >> num;

    if(num >= 18){
        cout << "Eliglible for Vote" << endl;
    }
    else{
        cout << " Not Eliglible for Vote" << endl;
    }
    
}