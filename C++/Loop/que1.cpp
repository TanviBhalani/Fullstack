#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i=1; i<=num; i++){
        sum = sum + i;
    }

    cout << " Sum of the num is : " << sum;
}
