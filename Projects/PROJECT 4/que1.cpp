#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the array's size: ";
    cin >> n;

    int a[n];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Negative elements are: ";
    for (int i = 0; i < n; i++){
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }

}