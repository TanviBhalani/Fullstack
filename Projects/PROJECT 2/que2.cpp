#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 1;

    cout << "Enter any number: ";
    cin >> num;

    if (num < 0){
        num = -num;
    }

    for (num > 0; num /= 10;){
        sum++;
    }

    cout << "Total number of digits: " << sum << endl;

}


 // 13654 / 10 = 1365.4 = 1365
 // 1365 / 10 = 136.5 = 136
 // 136 /10 = 13.6 = 13
 // 13 / 10 = 1.3 = 1
 // 1 / 10 = 0.1 = 0 