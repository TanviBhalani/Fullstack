#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 1;
    int sum = 0;
    cout << "Input number of terms: ";
    cin >> n; 

    cout << "The odd numbers are: ";

    for (int i = 0; i < n; i++) {
        cout << a << " "; 
        sum += a;         
        a += 2;    
    }

    cout << endl;
    cout << "The Sum of odd Natural Numbers up to " << n << " terms: " << sum << endl;

}
