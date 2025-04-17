#include <iostream>
using namespace std;

int main(){

    int arr[6] = {2002,2003,2004,2005,2006,2007};

    for (int a : arr){
        if(a%4 == 0 && a%100 != 0 || a%400 == 0){
            cout << a << endl;
        }
        
    }
    
}