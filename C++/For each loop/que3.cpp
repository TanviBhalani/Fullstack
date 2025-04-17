#include <iostream>
using namespace std;

int main(){

    int arr[5] = {12,37,50,78,90};

    int sum = 0;

    for(int i=1; i<=5; i++){
        cout << (sum += i);
        
    }
    cout << sum/5;

   
}