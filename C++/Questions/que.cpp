#include <iostream>
using namespace std;
int main(){
    
    int a = 10;
    int b = 23;
    int c = 2;

    if(a>=b)
    {
        if(a>=c)
        {
            cout << "A is max" << endl;
        }
        else{
            cout << "C is max" << endl;
        }
    }
    else{
        if(b>c){
            cout << "B is max" << endl;
        }
        else{
            cout << "C is max" << endl;
        }
    }

}