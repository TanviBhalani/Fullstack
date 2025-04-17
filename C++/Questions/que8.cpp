#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A, B, C, D, E, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
        break;
        case 'B':
            cout << "Good job!" << endl;
        break;
        case 'C':
            cout << "Nice!" << endl;
        break;
        case 'D':
          cout << "You Passsed!";
        break;
        case 'E':
            cout << "You need improvement!" << endl;
        break;
        case 'F':
            cout << "Unfortunately, you failed." << endl;
        break;
        default:
            cout << "Invalid grade entered!" << endl;
        break;    
    }

}
