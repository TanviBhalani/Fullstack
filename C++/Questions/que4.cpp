#include <iostream>
using namespace std;
int main(){
    
    char st;

    cout << "Enter a character to check is this vowel or constant:";
    cin >> st;

    if(st=='a' || st=='e' || st=='i' || st=='o' || st=='u'){
        cout << "This is a Vowel";
    }
    else{
        cout << "This is a constant";
    }
    
}