#include <iostream>
using namespace std;

int main(){
    int rows = 5;

    for (int i = 1; i <= 5; i++){

        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }

}