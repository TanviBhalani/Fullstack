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
 // for me only:
 // suppose the number is 425
 // last number is "5" 
 // then 425 is divide by 10 (it divides number till number is grater than or equal to 10)
 // 425 / 10 = 42.5 = 42
 // 42 / 10 = 4.2 = 4 (first number)
 // first num + last num = 4 + 5 = 9