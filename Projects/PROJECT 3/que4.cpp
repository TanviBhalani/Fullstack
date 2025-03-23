#include <iostream>
using namespace std;

int main(){

    for(int i = 5; i >= 1; i--) 
    {
        for (int k = i; k >= 0; k--) 
        {
            cout << " ";
        }
        for (int j = i; j <= 5; j++) 
        {
            cout << j;
        }
        for (int l = 4; l >= i; l--) 
        {
            cout << l;
        }
        
        cout << endl;
    }
}