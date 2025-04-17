#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int i = 1;

    cout << "Factor of " << num << " is " << endl;

    while(i<=num){
        if(num % i == 0){
            cout << i << endl;
        }
        i++;
    }
}