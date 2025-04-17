#include <iostream>
using namespace std;
int main(){
    
    int a;
    int b;

    cout << "Enter the value of a :" << endl;
    cin >> a;

    cout << "Enter the value of b :" << endl;
    cin >> b;

     // if(a>b){
     //  cout << "a is max";
    //}
    //else{
    //    cout << "b is max";
    //}

    (a>b) ? cout << "a is max" : cout << "b is max";
    
}