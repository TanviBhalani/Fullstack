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

    cout << "Your Grade is " << grade << endl;

}
