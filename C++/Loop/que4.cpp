#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the value of N: ";
    cin >> N; 

    cout << "Numbers divisible by both 3 and 5 are: ";

    for (int i = 1; i <= N; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

}
