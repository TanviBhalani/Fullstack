#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;

    cout << "Enter a number : ";
    cin >> num;

    while(num>0){
        int lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }

    cout << "Sum of all digit is: " << sum;
}