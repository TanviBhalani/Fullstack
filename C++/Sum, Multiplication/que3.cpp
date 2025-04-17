#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a digit : ";
    cin >> num;

    int lastdigit = num % 10;
    int firstdigit;

    while(num >= 10){
        num = num / 10;
        firstdigit = num;
    }

    int sum = lastdigit + firstdigit;

    cout << "Sum of First and Last digit is: " << sum;


}