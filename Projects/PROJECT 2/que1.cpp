#include <iostream>
using namespace std;

int main() {

    char alphabet = 'A'; 

    do {
        cout << alphabet << " " << endl;
        alphabet += 4;
    } 
    
    while (alphabet <= 'Z');

   
}
