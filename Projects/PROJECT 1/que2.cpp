#include <iostream>
using namespace std;

int main(){
    int score;
    char grade;

    cout << "Enter your score (out of 100): ";
    cin >> score;

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    cout << "Your Grade is " << grade << ". ";

    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done." << endl;
            break;
        case 'C':
            cout << "Good job." << endl;
            break;
        case 'D':
            cout << "Nice, but you could do better." << endl;
            break;
        case 'E':
            cout << "You passed, but improvement is needed." << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

}
