#include<iostream>
using namespace std;
#include <string.h>
#include <vector>

//last digit is removed using pop_back

int main(){
    vector <int> Arr;
    vector <int> Arrr(5,2);
    // g++ -std=c+11 file.cpp
    vector<int> Arrrr{12,23,12,54,23,54};

    Arrrr.push_back(33);
    Arrrr.pop_back();

    for(int i=0; i<Arrrr.size(); i++){
        cout << Arrrr[i] << endl;
    }
    

    return 0;
}