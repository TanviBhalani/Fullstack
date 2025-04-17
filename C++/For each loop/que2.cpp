#include <iostream>
using namespace std;

int main(){

    int arr[5] = {12,37,50,78,90};

    int sum = 0;

    for(int a : arr){
        sum += a; 
    }

    cout << sum/5 ;
}