#include <iostream>
using namespace std;
#include <string.h>
#include <vector>

int main(){
    vector <int> Arr;
    vector <int> Arrr(5,2);
    // g++ -std=c+11 file.cpp
    vector<int> Arrrr{12,23,12,54,23,54};

    for(int i=0; i<5; i++){
        cout << Arrr[i] << endl;
    }
    for(int i=0; i<6; i++){
        cout << Arrrr[i] << endl;
    }

    return 0;



}