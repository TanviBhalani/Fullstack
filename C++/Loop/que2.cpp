#include <iostream>
using namespace std;

int main(){
    int n,i = 1;
    int fact = 1;

    cout << "Enter a number to found factorial : ";
    cin >> n ;

    for (int i = n; i>=1 ; i--){
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is " << fact;

   
}