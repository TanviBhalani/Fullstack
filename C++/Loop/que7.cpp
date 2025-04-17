#include <iostream>
using namespace std;

int main(){
    int num;
    int fact = 1;

    cout << "Enter a value of N : ";
    cin >> num ;


    for (int i = num; i>=num; i--){
        if(num<=1){
            fact = 1;
            break;
        }
        fact = fact * i;
    } 
    
    cout << "Factorial of " << num << " is " << fact;

}